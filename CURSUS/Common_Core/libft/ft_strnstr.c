/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:27:23 by victofer          #+#    #+#             */
/*   Updated: 2022/09/23 10:20:14 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	size_t	nlen;

	nlen = ft_strlen(needle);
	if (nlen == 0 || haystack == needle)
		return (haystack);
	while (*haystack && len-- >= nlen)
	{
		if (*haystack == *needle && ft_memcmp (haystack, needle, nlen) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
