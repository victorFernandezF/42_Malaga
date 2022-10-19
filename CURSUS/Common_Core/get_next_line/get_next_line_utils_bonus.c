/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 13:46:42 by victofer          #+#    #+#             */
/*   Updated: 2022/10/18 18:53:22 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static void	*ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
	return (s);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;
	int		total;

	total = size * count;
	res = malloc(total);
	if (res == NULL)
		return (res);
	ft_bzero(res, size * count);
	return (res);
}

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*join;
	int		i;
	int		j;
	int		size;

	i = 0;
	size = ft_strlen(s1) + ft_strlen(s2);
	join = (char *)malloc((size + 1) * sizeof(char));
	if (!join || !s1 || !s2)
		return (NULL);
	while (s1[i])
	{
		join[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		join[i] = s2[j];
		i++;
		j++;
	}
	join[size] = 0;
	return (join);
}

char	*ft_strchr(char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != c && *str != 0)
		str++;
	if (*str == c)
		return (str);
	else
		return (NULL);
}