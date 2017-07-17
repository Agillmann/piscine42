/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 21:42:32 by agillman          #+#    #+#             */
/*   Updated: 2017/07/17 22:47:25 by agillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	(void)argc;
	i = 1;
	while (argv[i])
	{
		i++;
	}
	while (i > 1)
	{
		ft_putstr(argv[i - 1]);
		ft_putchar('\n');
		i--;
	}
}
