/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 19:06:54 by agillman          #+#    #+#             */
/*   Updated: 2017/07/17 14:20:46 by agillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int				len_dest;
	int				len_src;

	i = 0;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (len_dest < len_src)
	{
		src[n] = '\0';
		return (src);
	}
	else
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	dest[i] = '\0';
	return (dest);
}
