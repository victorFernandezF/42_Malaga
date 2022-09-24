/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 14:43:27 by victofer          #+#    #+#             */
/*   Updated: 2022/08/16 10:39:32 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_print_comb2(void);
void	t_putchar(char ca);

int	main(void)
{
	ft_print_comb2();
}

void	ft_putchar(char ca)
{
	write(1, &ca, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putchar((i / 10) + 48);
			ft_putchar((i % 10) + 48);
			ft_putchar (32);
			ft_putchar((j / 10) + 48);
			ft_putchar((j % 10) + 48);
			if (i < 98 || j < 99)
			{
				ft_putchar(',');
				ft_putchar (32);
			}
			j++;
		}
		i++;
	}
}
