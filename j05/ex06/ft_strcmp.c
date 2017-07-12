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
	int cpt1;
	int cpt2;

	cpt1 = 0;
	cpt2 = 0;
	while (s1[cpt1] != '\0' || s2[cpt2] != '\0')
	 {
		 if (s1[cpt1] == s2[cpt2])
		 {
		 	cpt1++;
			cpt2++;
		}
		else
				return s1[cpt1] - s2[cpt2];
	}
	if (s1[cpt1] == '\0' && s2[cpt2] == '\0')
		return 0;
	else
	{
		if (s1[cpt1] == '\0')
			return s2[cpt2+1];
		else
			return s1[cpt1+1];
	}
}
