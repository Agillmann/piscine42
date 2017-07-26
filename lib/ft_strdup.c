/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 17:55:24 by agillman          #+#    #+#             */
/*   Updated: 2017/07/19 17:57:20 by agillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int cpt;

	cpt = 0;
	while (str[cpt])
	{
		cpt++;
	}
	return (cpt);
}

char	*ft_strdup(char *src)
{
	char	*tmp;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(src);
	if (NULL == (tmp = (char *)malloc(sizeof(char) * len)))
		return (tmp);
	while (i <= len)
	{
		tmp[i] = src[i];
		i++;
	}
	return (tmp);
}
