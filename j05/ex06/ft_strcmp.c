/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 17:17:11 by agillman          #+#    #+#             */
/*   Updated: 2017/07/11 18:13:30 by agillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int res1;
	int res2;
	int cpt;

	cpt = 0;
	res1 = 0;
	res2 = 0;
	while (s1[cpt] != '\0')
	{
		res1 = res1 + s1[cpt];
		cpt++;
	}
	cpt = 0;
	while (s2[cpt] != '\0')
	{
		res2 = res2 + s2[cpt];
		cpt++;
	}
	return (res1 -res2);
}
