/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change_bases.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:07:22 by victofer          #+#    #+#             */
/*   Updated: 2022/10/13 10:46:04 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_bin_to_dec(int num)
{
	int	decimal;
	int	result;
	int	base;

	base = 1;
	while (num > 0)
	{
		result = num % 10;
		decimal += result * base;
		num = num / 10;
		base = base * 2;
	}
	return (decimal);
}

int	ft_dec_to_bin(int num)
{
	int	i;
	int	aux;
	int	bin;

	i = 1;
	bin = 0;
	while (num != 0)
	{
		aux = num % 2;
		num /= 2;
		bin += aux * i;
		i *= 10;
	}
	return (bin);
}

char	*ft_dec_to_hexa(int num)
{
	char	*hexa;
	int		quotient;
	int		j;
	int		aux;

	hexa = (char *)malloc(sizeof(char) * 100);
	if (!hexa)
		return (NULL);
	quotient = num;
	j = 0;
	while (quotient != 0)
	{
		aux = quotient % 16;
		if (aux < 10)
			hexa[j++] = 48 + aux;
		else
			hexa[j++] = 55 + aux;
		quotient = quotient / 16;
	}
	return (hexa);
}

