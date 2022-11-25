/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bytes.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:30:52 by victofer          #+#    #+#             */
/*   Updated: 2022/11/23 18:33:14 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	result;
	int				bits;

	bits = 8;
	while (bits--)
	{
		result = (result << 1) | (octet & 1);
		octet >>= 1;
	}
	return (result);
}
