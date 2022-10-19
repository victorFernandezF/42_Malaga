/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:15:10 by victofer          #+#    #+#             */
/*   Updated: 2022/10/19 19:20:46 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Return the lenght of the unsigned number passed by arg */
static int	ft_unsigned_len(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

/* Like itoa but whith unsigned int.
It takes and convert it to string */
char	*ft_unsigned_itoa(unsigned int n)
{
	char	*num;
	int		len;

	len = ft_unsigned_len(n);
	num = (char *)malloc(sizeof(char) * len + 1);
	if (!num)
		return (NULL);
	num[len] = '\0';
	while (n != 0)
	{
		num[len - 1] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	return (num);
}

/* Print the unsigned int and return the number
of chars printed */
int	ft_print_unsigned(unsigned int n)
{
	int		ret;
	char	*number;

	ret = 0;
	if (n == 0)
		ret += ft_print_char('0');
	else
	{
		number = ft_unsigned_itoa(n);
		ret += ft_print_string(number);
		free(number);
	}
	return (ret);
}
