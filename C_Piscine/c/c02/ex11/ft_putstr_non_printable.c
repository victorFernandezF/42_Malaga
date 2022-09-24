/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:26:19 by victofer          #+#    #+#             */
/*   Updated: 2022/08/22 19:59:28 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthexa(char c)
{
	int		i;
	char	hexa[6];
	char	letter;

	i = 0;
	letter = 'a';
	while (i < 6)
	{
		hexa[i] = letter;
		letter++;
		i++;
	}
	if (c > 9)
	{
		c = hexa[c - 10];
		ft_putchar(92);
		ft_putchar('0');
		ft_putchar(c);
	}
	else
	{
		ft_putchar(92);
		ft_putchar('0');
		ft_putchar(c);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 31)
		{
			ft_puthexa(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
