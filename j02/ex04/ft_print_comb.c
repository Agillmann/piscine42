/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 07:18:39 by agillman          #+#    #+#             */
/*   Updated: 2017/07/07 14:22:02 by agillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_3number(char i, char y, char z)
{
	ft_putchar(i);
	ft_putchar(y);
	ft_putchar(z);
}

void	ft_print_comb(void)
{
	char i;
	char y;
	char z;

	i = '0';
	while (i <= '7')
	{
		y = i + 1;
		while (y <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{
				ft_print_3number(i, y, z);
				if (!(i == '7' && y == '8' && z == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				z++;
			}
			y++;
		}
		i++;
	}
}
