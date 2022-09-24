/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:34:15 by victofer          #+#    #+#             */
/*   Updated: 2022/09/23 10:08:49 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(char *s, int c)
{
	char		*str;
	size_t		len;

	len = ft_strlen(s);
	str = (char *)s + len;
	while (*str != c)
	{
		if (str == s)
		{
			return (NULL);
		}
		str--;
	}
	return (str);
}
