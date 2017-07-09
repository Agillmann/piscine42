/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 12:14:52 by agillman          #+#    #+#             */
/*   Updated: 2017/07/09 12:36:36 by agillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int res;
	int cpt;

	res = 1;
	cpt = nb;
	while (cpt > 0)
	{
		if (nb <= 0 || nb > 12)
		{
			return (0);
		}
		res = res * cpt;
		cpt--;
	}
	return (res);
}
