/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:33:46 by victofer          #+#    #+#             */
/*   Updated: 2022/11/24 10:48:22 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_base(char c, int base)
{
	int		i;
	char	*lower;
	char	*upper;

	i = 0;
	lower = "0123456789abcdef";
	upper = "0123456789ABCDEF";
	while (i < base)
	{
		if (c == upper[i] || c == lower[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, int base)
{
	int	i;
	int	nb;
	int	neg;

	i = 0;
	neg = 0;
	nb = 0;
	while (str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = 1;
		i++;
	}
	while (ft_base(str[i], base) != -1)
	{
		nb = nb * base;
		nb = nb + ft_base(str[i], base);
		i++;
	}
	if (neg)
		return (nb * -1);
	return (nb);
}

int	main(void)
{
	char	*str;
	int		b;

	str = "5";
	b = 16;
	printf("%i", ft_atoi_base(str, b));
	return (0);
}
