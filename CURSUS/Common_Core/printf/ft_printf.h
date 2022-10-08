/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:45:51 by victofer          #+#    #+#             */
/*   Updated: 2022/10/08 12:28:28 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
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

int			ft_printf(char const *input, ...);
int			ft_print_char(int c);
int			ft_print_unsigned(unsigned int n);
char		*ft_unsigned_itoa(unsigned int n);
int			ft_print_ptr(unsigned long long ptr);
void		ft_putchar(char c);
int			ft_print_string(char *s);
int			ft_print_int(int n);
int			ft_print_hexa(unsigned int num, char format);
#endif