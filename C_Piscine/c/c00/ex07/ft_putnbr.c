/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 11:43:15 by victofer          #+#    #+#             */
/*   Updated: 2022/08/16 12:21:39 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putnumber(int number);
void	ft_print_limit(void);

int	main(void)
{
	ft_putnbr(42);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	nb2;

	if (nb == -2147483648)
	{
		ft_print_limit();
	}
	else if (nb < 0)
	{
		nb2 = nb * -1;
		ft_putchar('-');
		ft_putnbr(nb2);
	}
	else if (nb <= 9)
	{
		ft_putchar(nb + 48);
	}
	else if (nb <= 99)
	{
		ft_putnumber(nb);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + 48);
	}		
}

void	ft_putnumber(int number)
{
	ft_putchar((number / 10) + 48);
	ft_putchar((number % 10) + 48);
}

void	ft_print_limit(void)
{
	ft_putchar('-');
	ft_putchar('2');
	ft_putnbr(147483648);
}
