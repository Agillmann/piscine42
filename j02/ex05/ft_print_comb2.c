/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 22:38:41 by agillman          #+#    #+#             */
/*   Updated: 2017/07/08 15:39:12 by agillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_num(int a, int b)
{
	char c1;
	char c2;

	c1 = a / 10 + '0';
	ft_putchar(c1);
	c2 = a % 10 + '0';
	ft_putchar(c2);
	ft_putchar(' ');
	c1 = b / 10 + '0';
	ft_putchar(c1);
	c2 = b % 10 + '0';
	ft_putchar(c2);
	if (!(a == 98 && b == 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int x;
	int y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_print_num(x, y);
			y++;
		}
		x++;
	}
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
