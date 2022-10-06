/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:44:34 by victofer          #+#    #+#             */
/*   Updated: 2022/10/06 18:49:20 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_print_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_eval_format(va_list args, const char format)
{
	int	ret;

	ret = 0;
	if (format == 'c')
		ret += ft_print_char(va_arg(args, int));
	if (format == 'd' || format == 'i')
		ret += ft_print_int(va_arg(args, int));
	if (format == 's')
		ret += ft_print_string(va_arg(args, char *));
	if (format == 'u')
		ret += ft_print_unsigned(va_arg(args, unsigned int));
	if (format == '%')
		ret += ft_print_char('%');
	return (ret);
}

int	ft_printf(char const *input, ...)
{
	va_list	args;
	int		i;
	int		ret;

	i = 0;
	ret = 0;
	va_start(args, input);
	while (input[i])
	{
		if (input[i] == '%')
		{
			ret += ft_eval_format(args, input[i + 1]);
			i++;
		}
		else
			ret += ft_print_char(input[i]);
		i++;
	}
	va_end(args);
	return (ret);
}
