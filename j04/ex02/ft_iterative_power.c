/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 19:04:45 by agillman          #+#    #+#             */
/*   Updated: 2017/07/09 19:30:04 by agillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int res;
	int cpt;

	res = nb;
	cpt = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (cpt < power)
	{
		res = nb * res;
		cpt++;
	}
	return (res);
}
