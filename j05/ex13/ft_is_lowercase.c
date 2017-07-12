/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_lowercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 17:41:17 by agillman          #+#    #+#             */
/*   Updated: 2017/07/12 21:09:31 by agillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_low(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}

int		ft_str_is_lowercase(char *str)
{
	int cpt;

	cpt = 0;
	while (str[cpt])
	{	
		if (ft_is_low(str[cpt]) == 0)
			return (0);
		cpt++;
	}
	return (1);
}
