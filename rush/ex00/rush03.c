/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clucas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 17:01:18 by clucas            #+#    #+#             */
/*   Updated: 2017/07/09 17:58:48 by clucas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_putchar(char c);

void		printcolumn(int x, int y, int column, int row)
{
	if (column == x && (row == 1 || row == y))
		ft_putchar('A');
	else if (column == 1 && (row == 1 || row == y))
		ft_putchar('C');
	else if (row == y || row == 1 || column == 1 || column == x)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void		rush(int x, int y)
{
	int column;
	int row;

	column = x;
	row = y;
	if (column <= 0 || row <= 0)
		;
	{
		while (row > 0)
		{
			while (column > 0)
			{
				printcolumn(x, y, column, row);
				column--;
			}
			row--;
			column = x;
			ft_putchar('\n');
		}
	}
}
