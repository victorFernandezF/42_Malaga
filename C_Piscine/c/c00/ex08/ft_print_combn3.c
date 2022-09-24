/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 13:18:19 by victofer          #+#    #+#             */
/*   Updated: 2022/08/16 12:53:36 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_comb(void);
void	ft_write(char a, char b, char c);

int	main(void)
{
	ft_print_comb();
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;
	int tope;
	int cont;
	
	cont = 1;
	tope = '9';
	a = '0';
	while (a <= tope -cont)
	{
		b = a + 1;
		while (b <= tope - cont)
		{
			c = b + 1;
			while (c <= tope)
			{
				ft_write(a, b, c);
				cont++;
				c++;
			}
			b++;
		}
		a++;
	}
}

void	ft_write(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7' || b != '8')
	{
		write(1, ", ", 2);
	}
}
