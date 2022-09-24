/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pritn_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 17:07:50 by victofer          #+#    #+#             */
/*   Updated: 2022/08/15 17:44:08 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_combn(int n);
void	ft_putchar(char c);

int main(void)
{
	ft_print_combn(5);
	return (0);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_combn(int n)
{
	int i;
	int x;
	int j;

	i = 0;
	x = 0;
		while (i <= 8)
		{
			j = i + 1;
			while (j <= 9)
			{
				ft_putchar(i + 48);
				ft_putchar(j +  48);
				if(j < 9 || i < 8 )
				{
					ft_putchar(',');
					ft_putchar(32);
				}
				j++;
			}
			i++;
		}
}
