/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 13:51:27 by agillman          #+#    #+#             */
/*   Updated: 2017/07/12 15:35:57 by agillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_capitalize(char *str)
{
    int cpt;
    int mot;

    cpt = 0;
    mot = 0;
    while(str[cpt] != '\0')
    {
        if(str[cpt] >= 'a' && str[cpt] <= 'z')
        {
            if (mot == 0)
                str[cpt] = str[cpt] - 32;
            mot = 1;
        }
        else if(str[cpt] >='A' && str[cpt] <= 'Z')
		{
            if (mot == 1)	
				str[cpt] = str[cpt] + 32;
			mot = 1;
		}
		else if ( str[cpt] >= '0'  && str[cpt] <= '9')
            mot = 1;
		else if (str[cpt] == ' ' || str[cpt] == '+' || str[cpt] == '-')
			mot = 0; 
        cpt ++;
    }
    return str;
}
