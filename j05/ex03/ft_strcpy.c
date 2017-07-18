/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 17:24:52 by agillman          #+#    #+#             */
/*   Updated: 2017/07/17 14:13:00 by agillman         ###   ########.fr       */
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

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	int len_dest;
	int len_src;

	i = 0;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (len_dest < len_src)
		return (0);
	else
	{
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
}
