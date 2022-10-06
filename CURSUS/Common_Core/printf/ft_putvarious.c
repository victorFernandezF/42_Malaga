/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvarious.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:04:13 by victofer          #+#    #+#             */
/*   Updated: 2022/10/06 18:50:30 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putchar(char c)
{
	write(1, &c, sizeof(c));
}

int	ft_print_string(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	return (1);
}

static void	ft_putnumber(int number)
{
	ft_putchar((number / 10) + 48);
	ft_putchar((number % 10) + 48);
}

static void	ft_print_limit(void)
{
	ft_putchar('-');
	ft_putchar('2');
	ft_print_int(147483648);
}

int	ft_print_int(int n)
{
	int	nb2;

	if (n == -2147483648)
	{
		ft_print_limit();
	}
	else if (n < 0)
	{
		nb2 = n * -1;
		ft_putchar('-');
		ft_print_int(nb2);
	}
	else if (n <= 9)
	{
		ft_putchar(n + 48);
	}
	else if (n <= 99)
	{
		ft_putnumber(n);
	}
	else
	{
		ft_print_int(n / 10);
		ft_putchar((n % 10) + 48);
	}
	return (1);
}
