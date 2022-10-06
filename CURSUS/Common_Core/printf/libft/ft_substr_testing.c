/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_testing.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:31:11 by victofer          #+#    #+#             */
/*   Updated: 2022/09/24 18:49:39 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		sub = malloc(sizeof(char) * 1);
		if (!sub)
			return (NULL);
		sub[0] = 0;
		return (sub);
	}
	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while ((char)s[start] && i < len)
	{
		sub[i] = (char)s[start];
		start++;
		i++;
	}
	sub[i] = 0;
	return (sub);
}
 */