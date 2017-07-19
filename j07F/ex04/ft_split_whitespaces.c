/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 13:16:01 by agillman          #+#    #+#             */
/*   Updated: 2017/07/19 16:27:22 by agillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int cpt;
	cpt = 0;
	while (str[cpt])
	{
		cpt++;
	}
	return (cpt);
}

int		ft_nb_str(char *str)
{
	int cpt;
	int i;

	cpt = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			cpt++;
			i++;
		}
		i++;
	}
	return (cpt);	
}

char	**ft_split_whitespaces(char *str)
{
	int len1;
	int len2;
	int i;
	int j;
	char *tmp[];

	len1 = ft_strlen(str + 1); // pour le dernier 0
	len2 = ft_nb_str(str);
	i = 0;
	j = 0;
	if (tmp = (char *)malloc(sizeof(char) * len2) == NULL)
		return (0);
	
		
}
