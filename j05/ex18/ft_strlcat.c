/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 12:25:57 by agillman          #+#    #+#             */
/*   Updated: 2017/07/13 16:34:19 by agillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char			*ft_strncat(char *dest, char *src, int nb)
{
	int cpt1;
	int cpt2;

	cpt1 = 0;
	cpt2 = 0;
	while (dest[cpt1] != '\0')
		cpt1++;
	while (cpt2 < nb)
	{
		if (src[cpt2] == '\0')
		{
			dest[cpt1] = '\0';
			return (dest);
		}
		dest[cpt1] = src[cpt2];
		cpt1++;
		cpt2++;
	}
	dest[cpt1] = '\0';
	return (dest);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int		cpt;
	char	*res_strncat;

	cpt = 0;
	res_strncat = ft_strncat(dest, src, size);
	while (res_strncat[cpt] != '\0')
		cpt++;
	return (cpt);
}
