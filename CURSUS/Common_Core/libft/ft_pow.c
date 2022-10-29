/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:36:48 by victofer          #+#    #+#             */
/*   Updated: 2022/10/29 13:47:54 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_pow(int n, int pow)
{
	int	i;
	int	res;

	i = 0;
	res = n;
	while (i < pow - 1)
	{
		res *= n;
		i++;
	}
	return (res);
}
