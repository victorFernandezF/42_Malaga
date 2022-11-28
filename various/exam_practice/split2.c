/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:05:43 by victofer          #+#    #+#             */
/*   Updated: 2022/11/28 10:58:43 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_count_words(char *str, char c)
{
	int	word;
	int	i;
	int	flag;

	i = 0;
	word = 0;
	flag = 0;
	while (str[i])
	{
		if (str[i] != c && flag == 0)
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

	word = (char *)malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
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
	int		start;

	split = (char **)malloc((ft_count_words(str, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	j = 0;
	start = -1;
	while (str[i])
	{
		if (str[i] != c && start < 0)
			start = i;
		else if ((str[i] == c || i == ft_strlen(str)) && start >= 0)
		{
			split[j++] = ft_word(str, start, i);
			start = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}

int	main(void)
{
	char	**split;

	split = ft_split("hola mundo adios", ' ');
	printf("%s", split[1]);
	free(split);
	return (0);
}
