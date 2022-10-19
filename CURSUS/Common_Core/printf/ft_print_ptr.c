/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:36:17 by victofer          #+#    #+#             */
/*   Updated: 2022/10/19 19:12:51 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Return the lenght of the ptr */
static int	ft_ptr_len(uintptr_t ptr)
{
	int	len;

	len = 0;
	while (ptr != 0)
	{
		len++;
		ptr = ptr / 16;
	}
	return (len);
}

/* Print the ptr passed by argument in hexadecimal base */
static void	ft_put_ptr(uintptr_t ptr)
{
	if (ptr >= 16)
	{
		ft_put_ptr(ptr / 16);
		ft_put_ptr(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			ft_putchar_fd(ptr + '0', 1);
		else
			ft_putchar_fd(ptr - 10 + 'a', 1);
	}
}

/*  Checks if pointer is 0 and if not calls the functions
 to print the pointer in hexadecimal */
int	ft_print_ptr(unsigned long long ptr)
{
	int	ret;

	ret = 0;
	ret += write(1, "0x", 2);
	if (ptr == 0)
		ret += write(1, "0", 1);
	else
	{
		ft_put_ptr(ptr);
		ret += ft_ptr_len(ptr);
	}
	return (ret);
}
