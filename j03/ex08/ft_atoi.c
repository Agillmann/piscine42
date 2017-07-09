/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 19:38:21 by agillman          #+#    #+#             */
/*   Updated: 2017/07/08 20:40:42 by agillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int cpt;

	cpt = 0;
	while (str[cpt])
		cpt++;
	return (cpt);
}

int		atoi (char * c)
{
	int i;
	int nb;
	int lenght;
	
	i = 0;
	nb = 0;
	lenght = ft_strlen(str) - 1;
	while (str[lenght])
	{
		if (str[i] == ' ' || str [i] == '+' )
		{
			nb = nb + 0;
		}
		if (str[i] <= 47 || str[i] >= 58)
		{
			nb = nb + 0;
		}
		if (str[i])
		{
			nb = nb * 10 - 48;
