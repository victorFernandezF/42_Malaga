/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:30:36 by victofer          #+#    #+#             */
/*   Updated: 2022/10/24 11:34:24 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_join_free(char *buffer, char *buff)
{
	char	*aux;

	aux = ft_strjoin(buffer, buff);
	free(buffer);
	return (aux);
}

char	*get_rest(char *rest)
{
	int		i;
	int		j;
	char	*line;

	i = 0;
	while (rest[i] && rest[i] != '\n')
		i++;
	if (!rest[i])
	{
		free(rest);
		return (NULL);
	}
	line = ft_calloc((ft_strlen(rest) - i + 1), sizeof(char));
	i++;
	j = 0;
	while (rest[i])
		line[j++] = rest[i++];
	free(rest);
	return (line);
}

char	*get_line(char *rest)
{
	int		i;
	char	*line;

	i = 0;
	if (!rest[i])
		return (NULL);
	while (rest[i] && rest[i] != '\n')
		i++;
	line = ft_calloc(i + 2, sizeof(char));
	i = 0;
	while (rest[i] && rest[i] != '\n')
	{
		line[i] = rest[i];
		i++;
	}
	if (rest[i] && rest[i] == '\n')
	{
		line[i++] = '\n';
	}
	return (line);
}

char	*ft_read(int fd, char *rest)
{
	char		*buffer;
	int			read_bytes;

	if (!rest)
		rest = ft_calloc(1, 1);
	buffer = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	read_bytes = 1;
	while (read_bytes > 0)
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free(buffer);
			free(rest);
			return (NULL);
		}
		buffer[read_bytes] = '\0';
		rest = ft_join_free(rest, buffer);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	free(buffer);
	return (rest);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	str = ft_read(fd, str);
	if (!str)
		return (NULL);
	line = get_line(str);
	str = get_rest(str);
	if (!line)
	{
		free(line);
		return (NULL);
	}
	return (line);
}
