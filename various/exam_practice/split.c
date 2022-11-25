/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:19:31 by victofer          #+#    #+#             */
/*   Updated: 2022/11/24 18:35:23 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_count_words(char *str, char c)
{
	int	word;
	int	i;
	int	flag;

	word = 0;
	flag = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c && word == 0)
		{
			flag = 1;
			word++;
		}
		else if (str[i] == c)
			flag = 0;
		i++;
	}
	return (word);
}

char	*ft_word(char *str, int start, int end)
{
	int		i;
	char	*word;

	i = 0;
	word = (char *)malloc((end - start) + 1 * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
		word[i++] = str[start++];
	word[start] = '\0';
	return (word);
}

char	**ft_split(char *str, char c)
{
	size_t	i;
	size_t	j;
	char	**split;
	int		index;

	split = (char **)malloc(ft_count_words(str, c) + 1 * sizeof(char *));
	if (!split)
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(str))
	{
		if (str[i] != c && index < 0)
			index = i;
		else if ((str[i] == c || i == ft_strlen(str)) && index >= 0)
		{
			split[j++] = ft_word(str, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}

int	main(void)
{
	char	**split;

	split = ft_split("hola mundoa", ' ');
	printf("%s", split[1]);
	return (0);
}
