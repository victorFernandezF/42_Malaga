/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:05:23 by victofer          #+#    #+#             */
/*   Updated: 2022/09/22 19:02:11 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;	

	len = ft_strlen(dst) + ft_strlen(src);
	if (dstsize <= ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	while (*dst)
		dst++;
	i = 0;
	while ((i < dstsize -(len - ft_strlen(src)) - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
