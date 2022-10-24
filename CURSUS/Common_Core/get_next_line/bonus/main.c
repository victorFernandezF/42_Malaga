/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:45:41 by victofer          #+#    #+#             */
/*   Updated: 2022/10/24 18:13:57 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int	main(void)
{
	int		fd;
	int		fd2;
	char	*line;

	fd = open("texto.txt", O_RDONLY);
	fd2 = open("texto2.txt", O_RDONLY);
	while (1)
	{
		line = get_next_line(fd);
		printf("%s", line);
		line = get_next_line(fd2);
		printf("%s", line);
		if (line == NULL)
			break ;
		line++;
	}
	return (0);
}
