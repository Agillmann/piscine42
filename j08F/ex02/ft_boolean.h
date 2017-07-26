/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 18:20:06 by agillman          #+#    #+#             */
/*   Updated: 2017/07/25 16:47:53 by agillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_BOOLEAN_H

# define _FT_BOOLEAN_H

# include <unistd.h>

# define TRUE		1
# define FALSE		0
# define SUCCESS	0
# define EVEN(n)	(n % 2) == 0
# define EVEN_MSG	"I have an even number of arguments.\n"
# define ODD_MSG 	"I have an odd number of arguments.\n"

typedef int		t_bool;

#endif
