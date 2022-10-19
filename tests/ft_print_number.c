/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:04:13 by victofer          #+#    #+#             */
/*   Updated: 2022/10/07 18:47:22 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int n)
{
	int		ret;
	char	*num;

	ret = 0;
	num = ft_itoa(n);
	ret += ft_print_string(num);
	free (num);
	return (ret);
}
