/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 20:34:25 by agillman          #+#    #+#             */
/*   Updated: 2017/07/26 13:35:22 by agillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int						ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char					*ft_strdup(char *src)
{
	char	*tmp;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(src);
	if (NULL == (tmp = (char *)malloc(sizeof(char) * len + 1)))
		return (tmp);
	while (i <= len)
	{
		tmp[i] = src[i];
		i++;
	}
	return (tmp);
}

struct s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	t_stock_par		*s_tab;
	int				i;

	i = 0;
	if (!(s_tab = malloc(sizeof(t_stock_par) * ac + 1)))
		return (NULL);
	while (i < ac)
	{
		s_tab[i].size_param = ft_strlen(av[i]);
		s_tab[i].str = av[i];
		s_tab[i].copy = ft_strdup(av[i]);
		s_tab[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	s_tab[i].str = 0;
	return (s_tab);
}

int		main(int argc, char **argv)
{
	t_stock_par		*tab;
	tab = ft_param_to_tab(argc, argv);
	ft_show_tab(tab);
	return(0);
}
