/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 16:23:51 by agillman          #+#    #+#             */
/*   Updated: 2017/07/26 13:59:27 by agillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#define F NULL

void	ft_init_var(int *a, int *b, int *c)
{
	*a = 0;
	*b = 0;
	*c = 0;
}

char	**ft_alloc_tab(char **tab, char *str)
{
	int i;
	int nb_word;

	ft_init_var(&i, &nb_word, &nb_word);
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
		{
			nb_word++;
			i++;
			while (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
					&& str[i])
				i++;
		}
	}
	if (F == (tab = (char **)malloc(sizeof(char *) * (nb_word + 1))))
		return (0);
	return (tab);
}

char	**ft_alloc_word(char **tab, char *str)
{
	int i;
	int j;
	int len;

	ft_init_var(&i, &j, &len);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i])
	{
		if (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\v'
					|| str[i] == '\0'))
		{
			len++;
			if (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\n'
					|| str[i + 1] == '\0')
			{
				if (F == (tab[j] = (char *)malloc(sizeof(char *) * (len + 1))))
					return (0);
				len = 0;
				j++;
			}
		}
		i++;
	}
	return (tab);
}

char	**ft_add_char(char **tab, char *str)
{
	int i;
	int j;
	int k;

	ft_init_var(&i, &j, &k);
	while (str[k] == ' ' || str[k] == '\t' || str[k] == '\n')
		k++;
	while (str[k] != '\0')
	{
		tab[i][j] = str[k];
		k++;
		j++;
		if ((str[k] == ' ' || str[k] == '\t' || str[k] == '\n')
				|| str[k] == '\0')
		{
			tab[i][j] = '\0';
			j = 0;
			i++;
			while ((str[k] == ' ' || str[k] == '\t' || str[k] == '\n')
					&& str[k])
				k++;
		}
	}
	tab[i] = 0;
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	char **tab;

	tab = F;
	tab = ft_alloc_tab(tab, str);
	tab = ft_alloc_word(tab, str);
	tab = ft_add_char(tab, str);
	return (tab);
}
