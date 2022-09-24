/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pritn_combn2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 17:07:50 by victofer          #+#    #+#             */
/*   Updated: 2022/08/16 13:02:22 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_combn(int n);
void	ft_putchar(char c);

int main(void)
{
	ft_print_combn(4);
	return (0);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_combn(int n)
{
	int i;
	int j;
	int x;	;

	i = 0;
	j = 0;;
	x = n;
	while (i <= 9)
	{
		ft_putchar(i + 48);
		ft_putchar(',');
		ft_putchar(32);
		i++;
		
	}
	

}
	

