/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_sudoku.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 13:07:53 by agillman          #+#    #+#             */
/*   Updated: 2017/07/15 19:16:22 by agillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>

#define MAX 9

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		ft_init_tab(char **argv, char **tab)
{
	int cpt1;
	int cpt2;

	cpt1 = 0;
	cpt2 = 0;
	while (cpt1 < MAX)
	{
		while (cpt2 < MAX)
		{
			tab[cpt1][cpt2] = argv[cpt1][cpt2];
			cpt2++;
		}
		cpt1++;
		cpt2 = 0;
	}
	return (0);
}

void	ft_print_tab(char **tab)
{
	int cpt1;
	int cpt2;

	cpt1 = 0;
	cpt2 = 0;

	while (cpt1 < MAX)
	{
		while (cpt2 < MAX)
		{
			ft_putchar(tab[cpt1][cpt2]);
			ft_putchar(' '); 
			cpt2++;
		}
		cpt1++;
		cpt2 = 0;
		ft_putchar('\n');
	}
}

int main (int ac, char **av)
{	
	(void)ac;	
	char tab[MAX][MAX];
	int flag;

	flag = ft_init_tab(&av[1],tab);
	if (flag != 0)
		ft_print_tab(tab);
	return 0;
}
