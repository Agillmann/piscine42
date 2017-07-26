/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 10:29:08 by agillman          #+#    #+#             */
/*   Updated: 2017/07/13 10:45:41 by agillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int cpt1;
	int cpt2;

	cpt1 = 0;
	cpt2 = 0;
	while (dest[cpt1] != '\0')
		cpt1++;
	while (src[cpt2] != '\0')
	{
		dest[cpt1] = src[cpt2];
		cpt1++;
		cpt2++;
	}
	dest[cpt1] = '\0';
	return (dest);
}
