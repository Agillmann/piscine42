/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 13:51:27 by agillman          #+#    #+#             */
/*   Updated: 2017/07/17 12:34:57 by agillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_word(char *str, int cpt, int mot)
{
	if (str[cpt] >= 'a' && str[cpt] <= 'z')
	{
		if (mot == 0)
			str[cpt] = str[cpt] - 32;
		return (1);
	}
	else if (str[cpt] >= 'A' && str[cpt] <= 'Z')
	{
		if (mot == 1)
			str[cpt] = str[cpt] + 32;
		return (1);
	}
	else if (str[cpt] >= '0' && str[cpt] <= '9')
		return (1);
	else if (str[cpt] == ' ' || str[cpt] == '+' || str[cpt] == '-')
		return (0);
	return (0);
}

char	*ft_capitalize(char *str)
{
	int cpt;
	int mot;

	cpt = 0;
	mot = 0;
	while (str[cpt] != '\0')
	{
		mot = is_word(str, cpt, mot);
		cpt++;
	}
	return (str);
}
