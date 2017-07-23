/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 18:22:49 by agillman          #+#    #+#             */
/*   Updated: 2017/07/22 21:08:13 by agillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int len;
	int *tab;

	if (min >= max)
		return (0);
	len = max - min;
	if (NULL == (tab = (int *)malloc(sizeof(int) * len)))
		return (0);
	i = 0;
	while (i < len)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (len);
}
