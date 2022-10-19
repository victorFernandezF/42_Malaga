/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c_str_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:29:14 by victofer          #+#    #+#             */
/*   Updated: 2022/10/19 18:35:21 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Print a char and return the number of things printed*/
int	ft_print_char(int c)
{
	write(1, &c, 1);
	return (1);
}

/* Print a string and return the number of characters printed */
int	ft_print_string(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], 1);
		i++;
	}
	return (i);
}

/* Print a number and return the number of digits printed */
int	ft_print_int(int n)
{
	int		ret;
	char	*num;

	ret = 0;
	num = ft_itoa(n);
	ret += ft_print_string(num);
	free (num);
	return (ret);
}
