/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 18:17:49 by agillman          #+#    #+#             */
/*   Updated: 2017/07/17 18:17:53 by agillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_upper(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

int		ft_str_is_uppercase(char *str)
{
	int cpt;

	cpt = 0;
	while (str[cpt])
	{
		if (ft_is_upper(str[cpt]) == 0)
			return (0);
		cpt++;
	}
	return (1);
}
