/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agillman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 17:24:45 by agillman          #+#    #+#             */
/*   Updated: 2017/07/22 18:19:14 by agillman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_H

# define _FT_H

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	ft_putnbr(int nb);

void	ft_swap(int *a, int *b);

int		atoi(char *str);

int		ft_strlen(char *str);

int		ft_strcmp(char *s1, char *s2);

char	*ft_strcat(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src);

char	*ft_strdup(char *src);

char	**ft_split_whitespaces(char *str);

#endif
