/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 13:16:01 by agillman          #+#    #+#             */
/*   Updated: 2017/07/20 21:47:13 by agillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


int		ft_nb_words(char *str)
{
	int cpt;
	int i;

	cpt = 0;
	i = 0;

	while (str[i] != '\0')
	{	
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{	
			i++;
		}
		if (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
		{
			cpt++;
			while (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
				i++;
		}
	}
	return (cpt);
}

int		ft_len_word(char *str)
{
	int cpt;
	int i;

	cpt = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
	{	
		i++;
	}
	if (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
	{
		while (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
		{	
			i++;
			cpt++;
		}
		return(cpt);
	}
	return (0);
}

int		ft_alloc_tab(char **tab, char *argv)
{
	tab = (char **)malloc(sizeof(char) * ft_nb_words(argv));
	if (tab == NULL)
		return (0);
	return (1);
}


int		ft_alloc_word(char **tab, char *str, int i)
{	
	while (str[i])
	{
		tab[i] = (char *)malloc(sizeof(char) * (ft_len_word(str) + 1));
		if (tab == NULL)
			return (0);
		return (1);
		i++;
	}
	return (0);
}

char	**ft_split_whitespaces(char *str)
{
	int i = 0;
	char **tab = NULL;

	if (ft_alloc_tab(tab,str) == 0)
		return (NULL);
	while(i < ft_nb_words(str))
	{
		if (ft_alloc_word(tab,str,i) == 0)
			return (NULL);
		i++;
	}
	tab[ft_nb_words(str)][i] = 0;
	return(tab);
}

int		main(int argc, char *argv[])
{
	(void)argc;
	//	char **tab

	printf("nb_word = %d \n", ft_nb_words(argv[1]));
	printf("alloc_tab = %d \n", ft_alloc_tab(argv,*argv));
	printf("len_word = %d \n", ft_len_word(argv[1]));
	printf("alloc_word = %d \n", ft_alloc_word(argv,argv[1],6));
//	printf("ft_split_whitespaces = %s \n", ft_split_whitespaces(*argv));
}
