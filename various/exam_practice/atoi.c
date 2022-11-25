/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:05:25 by victofer          #+#    #+#             */
/*   Updated: 2022/11/24 12:19:15 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_atoi(char *str)
{
	int	res;
	int	i;
	int	neg;

	i = 0;
	res = 0;
	neg = 0;
	while (str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = 1;
		i++;
	}
	while (str[i])
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	if (neg)
		return (res * -1);
	return (res);
}

int	main(void)
{
	printf("%i", ft_atoi("-42"));
	return (0);
}
