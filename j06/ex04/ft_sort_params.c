/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 22:50:24 by agillman          #+#    #+#             */
/*   Updated: 2017/07/17 23:04:23 by agillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int        ft_strcmp(char *s1, char *s2)
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
			return (s1[cpt1] - s2[cpt2]);
	}
	if (s1[cpt1] == '\0' && s2[cpt2] == '\0')
		return (0);
	else
	{
		if (s1[cpt1] == '\0')
			return (s2[cpt2 + 1]);
		else
			return (s1[cpt1 + 1]);
	}
}

int		main(int argc, char **argv)
{
	int i;
	
	
	

