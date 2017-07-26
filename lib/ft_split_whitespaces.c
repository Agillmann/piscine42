/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 16:23:51 by agillman          #+#    #+#             */
/*   Updated: 2017/07/22 16:24:07 by agillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_init_var(int *a, int *b, int *c, int *d)
{
	*a = 0;
	*b = 0;
	*c = 0;
	*d = 0;
}

void	ft_inc_var(int *a, int *b)
{
	*a += 1;
	*b += 1;
}

int		ft_nb_words(char *str, int *len_max)
{
	int cpt;
	int i;
	int len;
	int max;

	ft_init_var(&cpt, &i, &len, &max);
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
		{
			ft_inc_var(&cpt, &len);
			while (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
					&& str[i])
			{
				ft_inc_var(&i, &len);
			}
		}
		if (len > max)
			max = len - 1;
		len = 0;
	}
	*len_max = max;
	return (cpt);
}

void	ft_split_whitespaces_aux(char *str, char **tab)
{
	int k;
	int i;
	int j;

	ft_init_var(&i, &j, &k, &k);
	while (str[k] != '\0')
	{
		while (str[k] == ' ' || str[k] == '\t' || str[k] == '\n')
			k++;
		if (!(str[k] == ' ' || str[k] == '\t' || str[k] == '\n') && str[k])
		{
			tab[i][j] = str[k];
			ft_inc_var(&k, &j);
			while (!(str[k] == ' ' || str[k] == '\t' || str[k] == '\n')
						&& str[k])
			{
				tab[i][j] = str[k];
				ft_inc_var(&k, &j);
			}
			tab[i][j] = '\0';
			i++;
			j = 0;
		}
	}
	tab[i][j] = '0';
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		len_max;
	int		nb_word;
	int		i;

	tab = NULL;
	nb_word = ft_nb_words(str, &len_max) + 1;
	if (NULL == (tab = (char **)malloc(sizeof(char *) * nb_word)))
		return (0);
	i = 0;
	while (i < nb_word)
	{
		if (NULL == (tab[i] = (char *)malloc(sizeof(char) * (len_max + 1))))
			return (0);
		i++;
	}
	ft_split_whitespaces_aux(str, tab);
	return (tab);
}
