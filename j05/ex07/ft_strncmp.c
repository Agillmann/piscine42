/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 10:00:19 by agillman          #+#    #+#             */
/*   Updated: 2017/07/17 18:59:03 by agillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int cpt;

	cpt = 0;
	if (n == 0)
		return (0);
	if (s1[cpt] == '\0' && s2[cpt] == '\0')
		return (0);
	while (cpt < n && (s1[cpt] || s2[cpt]))
	{
		if (s1[cpt] == s2[cpt])
			cpt++;
		else
			return (s1[cpt] - s2[cpt]);
	}
	return (0);
}
