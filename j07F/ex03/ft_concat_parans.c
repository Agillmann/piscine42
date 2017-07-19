/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_parans.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 18:25:21 by agillman          #+#    #+#             */
/*   Updated: 2017/07/19 19:50:11 by agillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int cpt;

	cpt = 0;
	while (str[cpt])
	{
		cpt++;
	}
	return (cpt);
}

int		ft_len_argv(int argc, char **argv)
{
	int i;
	int len;

	i = 1;
	len = 0;
	while (i < argc)
	{
		len += ft_strlen(argv[1]);
		i++;
	}
	return (len + (argc - 2));
}

void	ft_check_end(char *str, int argc, int i, int k)
{
	if (i != argc)
		str[k] = '\n';
	else
		str[k] = '\0';
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	if ((str = (char *)malloc(sizeof(char) * ft_len_argv(argc, argv))) == NULL)
		return (0);
	i = 1;
	j = 0;
	k = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			str[k] = argv[i][j];
			j++;
			k++;
		}
		i++;
		ft_check_end(str, argc, i, k);
		j = 0;
		k++;
	}
	return (str);
}
