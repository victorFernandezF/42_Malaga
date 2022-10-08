/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:50:09 by victofer          #+#    #+#             */
/*   Updated: 2022/10/08 11:16:24 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int	main(void)
{
	int				d;
	unsigned int	u;
	unsigned int	x;
	char			c;
	char			*s;

	d = 42;
	u = 505056500;
	x = 42;
	c = 'h';
	s = "hello world";

	ft_printf("\nImprime numero [%%d / %%i]:\n");
	printf("	og printf: %d\n", d);
	ft_printf("	my printf: %d\n", d);
	ft_printf("\nImprime unsigned [%%u]:\n");
	printf("	og printf: %u\n", u);
	ft_printf("	my printf: %u\n", u);
	ft_printf("\nImprime numero en hexadecimal minusculas [%%x]:\n");
	printf("	og printf: %x\n", x);
	ft_printf("	my printf: %x\n", x);
	ft_printf("\nImprime numero en hexadecimal mayusculas [%%X]:\n");
	printf("	og printf: %X\n", x);
	ft_printf("	my printf: %X\n", x);
	ft_printf("\nImprime caracter [%%c]:\n");
	printf("	og printf: %c\n", c);
	ft_printf("	my printf: %c\n", c);
	ft_printf("\nImprime string [%%s]:\n");
	printf("	og printf: %s\n", s);
	ft_printf("	my printf: %s\n\n", s);
	return (0);
}
