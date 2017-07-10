/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 12:08:09 by agillman          #+#    #+#             */
/*   Updated: 2017/07/10 13:42:57 by agillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int cpt;

	cpt = 2;
	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	while (cpt <= nb)
	{
		if (nb % cpt == 0 && !(cpt == nb))
			return (0);
		else
			cpt++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	return (ft_find_next_prime(nb + 1));
}
