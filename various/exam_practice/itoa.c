/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:49:35 by victofer          #+#    #+#             */
/*   Updated: 2022/11/24 19:31:35 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	intlen(int n)
{
	int	len;

	len = 0;
	if (len <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_fill_res(char *res, int len, int nb)
{
	while (len--)
	{
		res[len] = 48 + (nb % 10);
		nb = nb / 10;
		if (nb == 0)
			break ;
	}
	return (res);
}

char	*ft_itoa(int nb)
{
	char	*res;
	int		len;

	len = intlen(nb);
	res = (char *)malloc(len + 1 * sizeof(char));
	if (!res)
		return (0);
	if (nb < 0)
	{
		len++;
		res[0] = '-';
		nb = nb * -1;
	}
	res = ft_fill_res(res, len, nb);
	res[len + 1] = '\0';
	return (res);
}

int	main(void)
{
	int	n;

	n = 91;
	printf("char %s\n", ft_itoa(n));
	return (0);
}
