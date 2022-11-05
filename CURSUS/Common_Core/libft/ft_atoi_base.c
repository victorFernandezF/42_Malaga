/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:26:47 by victofer          #+#    #+#             */
/*   Updated: 2022/11/04 16:03:10 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_spaces(char c)
{
	if (c == ' ' || c == '\n')
		return (1);
	return (0);
}

int	ft_base(char c, int base)
{
	char	*pos;
	char	*pos2;
	int		i;

	pos = "0123456789abcdef";
	pos2 = "0123456789ABCDEF";
	i = 0;
	while (i < base)
	{
		if (c == pos[i] || c == pos2[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, int base)
{
	int	i;
	int	neg;
	int	res;

	i = 0;
	res = 0;
	neg = 0;
	while (ft_spaces(str[i]))
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
	if (neg)
		return (-res);
	return (res);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	if (atoi(argv[2]) > 16)
		return (0);
	printf("%i", ft_atoi_base(argv[1], atoi(argv[2])));
}
