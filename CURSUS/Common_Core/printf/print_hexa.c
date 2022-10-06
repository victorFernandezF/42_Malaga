/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:22:04 by victofer          #+#    #+#             */
/*   Updated: 2022/10/06 19:34:56 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_hexa_lower(int num)
{
	
	int		n;

	n = num / 16;printf("%d", n);
	while (n > 16)
	{
		printf("%d", n / 16);
		n = n / 16;
	}
	
	return (n);
}
