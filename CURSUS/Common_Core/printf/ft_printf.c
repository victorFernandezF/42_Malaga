/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:44:34 by victofer          #+#    #+#             */
/*   Updated: 2022/10/04 12:51:24 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_count_args(char *s)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == 'a')
			count++;
		i++;
	}
	return (count);
}

int	ft_printf(char const *s)
{
	//int		i;
	//va_list	ptr;
	return (ft_count_args(s));
		
}

int main(void)
{
	ft_printf("hola");
	return (0);
}
