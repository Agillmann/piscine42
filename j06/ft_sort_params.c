/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 22:50:24 by agillman          #+#    #+#             */
/*   Updated: 2017/07/18 16:30:35 by agillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int        ft_strcmp(char *s1, char *s2)
{
	int cpt1;
	int cpt2;

	cpt1 = 0;
	cpt2 = 0;
	while (s1[cpt1] != '\0' || s2[cpt2] != '\0')
	{
		if (s1[cpt1] == s2[cpt2])
		{
			cpt1++;
			cpt2++;
		}
		else
			return (s1[cpt1] - s2[cpt2]);
	}
	if (s1[cpt1] == '\0' && s2[cpt2] == '\0')
		return (0);
	else
	{
		if (s1[cpt1] == '\0')
			return (s2[cpt2 + 1]);
		else
			return (s1[cpt1 + 1]);
	}
}

int		main(int argc, char *argv[])
{
	int i;
	char *tmp;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			tmp = argv[i];
			argv[i] = argv[i+1];
			argv[i+1] = tmp;
			i = 1;
		}
		else
			i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
