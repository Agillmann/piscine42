/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 18:15:08 by agillman          #+#    #+#             */
/*   Updated: 2017/07/17 18:15:29 by agillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alpha(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

int		ft_str_is_alpha(char *str)
{
	int cpt;

	cpt = 0;
	if (str[cpt] == '\0')
		return (1);
	while (str[cpt] != '\0')
	{
		if (ft_is_alpha(str[cpt]) == 0)
			return (0);
		cpt++;
	}
	return (1);
}
