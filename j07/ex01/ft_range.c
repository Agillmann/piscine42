/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 17:58:02 by agillman          #+#    #+#             */
/*   Updated: 2017/07/19 18:00:03 by agillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tmp;
	int i;
	int len;

	if (min >= max)
		return (NULL);
	len = max - min;
	if (NULL == (tmp = (int *)malloc(sizeof(int) * len)))
		return (tmp);
	i = 0;
	while (i < len)
	{
		tmp[i] = min;
		min++;
		i++;
	}
	return (tmp);
}
