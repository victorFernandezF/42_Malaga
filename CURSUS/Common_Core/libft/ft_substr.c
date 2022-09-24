/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:31:11 by victofer          #+#    #+#             */
/*   Updated: 2022/09/24 12:51:10 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;

	substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		substr[j++] = s[i++];
	substr[j] = '\0';
	return (substr);
}
