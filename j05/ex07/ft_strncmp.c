/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 10:00:19 by agillman          #+#    #+#             */
/*   Updated: 2017/07/12 13:18:42 by agillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int cpt1;
	unsigned int cpt2;

	cpt1 = 0;
	cpt2 = 0;
	if (n == 0)
		return (0);
	while (cpt1 < n && (s1[cpt1] != '\0' || s2[cpt2] != '\0'))
	 {
         if (s1[cpt1] == s2[cpt2])
		 {
		 	cpt1++;
			cpt2++;
		}
        else
            return (s1[cpt1] - s2[cpt2]);
	}
    if (s1[cpt1] == '\0')
        return (s2[cpt2+1]);
    else if (s2[cpt2] == '\0')
        return (s1[cpt1+1]);
    else
        return 0;
}
