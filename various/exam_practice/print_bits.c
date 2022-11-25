/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 09:36:40 by victofer          #+#    #+#             */
/*   Updated: 2022/11/25 09:41:42 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print_bits(char octet)
{
	int		bit;
	char	res;

	bit = 8;
	while (bit--)
	{
		res = (octet >> bit & 1) + '0';
		write(1, &res, 1);
	}
}

int	main(void)
{
	print_bits('a');
	return (0);
}
