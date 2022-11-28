/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:49:35 by victofer          #+#    #+#             */
/*   Updated: 2022/11/28 11:31:55 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_intlen(int nb)
{
	int	len;

	len = 0;
	if (nb < 0)
		len++;
	while (nb != 0)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}

char	*ft_write_numbers(char *res, int len, int nb)
{
	while (len--)
	{
		res[len] = (nb % 10) + 48;
		nb = nb / 10;
		if (nb == 0)
			break ;
	}
	return (res);
}

char	*ft_itoa(int nb)
{
	int		len;
	char	*res;

	len = ft_intlen(nb);
	res = (char *)malloc(len + 1 * sizeof(char));
	if (!res)
		return (NULL);
	if (nb < 0)
	{
		res[0] = '-';
		nb = nb * -1;
	}
	res = ft_write_numbers(res, len, nb);
	res[len + 1] = '\0';
	return (res);
}

int	main(void)
{
	int	n;

	n = -4200;
	printf("char %s\n", ft_itoa(n));
	return (0);
}
