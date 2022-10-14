/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:30:36 by victofer          #+#    #+#             */
/*   Updated: 2022/10/14 13:20:09 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_save(char *str)
{
	int		i;
	int		j;
	char	*s;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i])
	{
		free(str);
		return (NULL);
	}
	s = (char *)malloc(sizeof(char) * ft_strlen(str) - i + 1);
	if (!s)
		return (NULL);
	i++;
	j = 0;
	while (str[i])
		s[j++] = str[i++];
	s[j] = '\0';
	free(str);
	return (s);
}

char	*get_line(char *str)
{
	int		i;
	char	*s;

	i = 0;
	if (!str[i])
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	s = (char *)malloc(sizeof(char) * (i + 2));
	if (!s)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		s[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

char	*ft_read(int fd, char *str)
{
	char		*buff;
	int			read_bytes;

	read_bytes = 1;
	buff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (0);
	while ((read_bytes != 0) && (!ft_strchr(str, '\n')))
	{
		read_bytes = read(fd, buff, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free(buff);
			return (0);
		}
		buff[read_bytes] = '\0';
		str = ft_strjoin(str, buff);
	}
	free(buff);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	str = ft_read(fd, str);
	if (!str)
		return (NULL);
	line = get_line(str);
	str = get_save(str);
	return (line);
}

/* int	main(void)
{
	int	fd;

	fd = open("texto.txt", O_RDONLY);
	if (fd == -1)
		return (-1);
	close(fd);
	get_next_line(fd);
	return (0);
} */
