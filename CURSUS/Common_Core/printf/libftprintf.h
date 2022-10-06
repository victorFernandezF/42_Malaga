/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:45:51 by victofer          #+#    #+#             */
/*   Updated: 2022/10/06 19:31:46 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdarg.h>
# include "libft/libft.h"

typedef struct s_print
{
	va_list	args;
	int		wdt;
	int		prc;
	int		zero;
	int		pnt;
	int		dash;
	int		tl;
	int		sign;
	int		is_zero;
	int		perc;
	int		sp;
}			t_print;

int		ft_printf(char const *input, ...);
int		ft_print_unsigned(unsigned int n);
void	ft_putchar(char c);
int		ft_print_string(char *s);
void	ft_putendl(char *s);
int		ft_print_int(int n);
int		ft_print_hexa_lower(int num);

#endif