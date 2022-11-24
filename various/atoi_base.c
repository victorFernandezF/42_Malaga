/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:17:55 by victofer          #+#    #+#             */
/*   Updated: 2022/11/24 10:17:55 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int spaces(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\v'
		|| c == '\r' || c == '\f')
		return (1);
	return (0);
}

int	ft_base(const char c, int base)
{
	char	*upper;
	char	*lower;
	int		i;

	i = 0;
	upper = "0123456789ABCDEF";
	lower = "0123456789abcdef";
	while (i < base)
	{
		if (c == upper[i] || c == lower[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(const char *str, int base)
{
	int	i;
	int	neg;
	int	res;

	i = 0;
	res = 0;
	while (spaces(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = 1;
		i++;
	}
	while (ft_base(str[i], base) != -1)
	{
		res = res * base;
		res = res + ft_base(str[i], base);
		i++;
	}
	return (res);
}

int	main(void)
{
	char	*str;
	int		base;
	int		res;

	str = "101010";
	base = 2;
	res = ft_atoi_base(str, base);
	printf("%i", res);
	return (0);
}
