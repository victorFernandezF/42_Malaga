/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:52:25 by victofer          #+#    #+#             */
/*   Updated: 2022/11/24 19:36:32 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_intlen(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len = 1;
	while (nb != 0)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}

char	*write_number(char *res, int nb, int len)
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
	char	*res;
	int		len;

	len = ft_intlen(nb);
	res = (char *)malloc(len + 1 * sizeof(char));
	if (!res)
		return (NULL);
	if (nb < 0)
	{
		res[0] = '-';
		nb *= -1;
	}
	res = write_number(res, nb, len);
	res[len + 1] = '\0';
	return (res);
}

int	main(void)
{
	int	n;

	n = -102;
	printf("%s", ft_itoa(n));
	return (0);
}
