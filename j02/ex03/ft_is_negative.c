/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 06:59:08 by agillman          #+#    #+#             */
/*   Updated: 2017/07/07 14:19:44 by agillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int a)
{
	char neg;
	char pos;

	neg = 'N';
	pos = 'P';
	if (a < 0)
	{
		ft_putchar(neg);
	}
	else
	{
		ft_putchar(pos);
	}
}
