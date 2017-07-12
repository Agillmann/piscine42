/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 20:16:23 by agillman          #+#    #+#             */
/*   Updated: 2017/07/12 20:57:42 by agillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int cpt1;
	int cpt2;

	cpt1 = 0;
	cpt2 = 0;
	if (to_find[cpt2] == '\0')
		return (str);
	while (str[cpt1] != '\0')
	{
		while (to_find[cpt2] == str[cpt1])
		{
			if (to_find[cpt2 + 1] == '\0')
				return (str + (cpt1 - cpt2));
			cpt2++;
			cpt1++;
		}
		cpt1++;
		cpt2 = 0;
	}
	return (0);
}
