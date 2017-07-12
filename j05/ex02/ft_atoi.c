/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 19:38:21 by agillman          #+#    #+#             */
/*   Updated: 2017/07/11 12:56:45 by agillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		atoi (char * str)
{
	int i;
	int nb;
	int sign;
	
	i = 0;
	nb = 0;
	sign = 0;

	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	if (str[i] == '-')
	   sign = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	if (sign == 1)
		return (-nb);
	else
		return (nb);
}			
