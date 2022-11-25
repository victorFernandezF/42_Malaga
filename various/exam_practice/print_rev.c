/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_rev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:19:52 by victofer          #+#    #+#             */
/*   Updated: 2022/11/25 18:25:44 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*print_rev(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i--)
		ft_putchar(str[i]);
	ft_putchar(10);
	return (str);
}
