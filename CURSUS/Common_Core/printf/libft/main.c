/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:40:53 by victofer          #+#    #+#             */
/*   Updated: 2022/09/24 18:39:57 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char			*str;
	unsigned int	start;
	size_t			len;
	char			*res;

	str = "HOLA MUNDO HELLO WORLD";
	start = 5;
	len = 50;
	res = ft_substr(str, start, len);
	printf("%s", res);
	return (0);
}
