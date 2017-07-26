/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 21:17:54 by agillman          #+#    #+#             */
/*   Updated: 2017/07/25 22:37:12 by agillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_STOCK_PAR_H

# define _FT_STOCK_PAR_H

# include <stdlib.h>

# include <unistd.h>

typedef struct			s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}						t_stock_par;

void					ft_putchar(char c);

struct s_stock_par		*ft_param_to_tab(int ac, char **av);

#endif
