/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 11:47:17 by victofer          #+#    #+#             */
/*   Updated: 2022/11/09 12:49:54 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

void	ft_char_to_bin(char c, int pow, int pid)
{
	if (pow > 0)
		ft_char_to_bin(c / 2, pow - 1, pid);
	if ((c % 2) == 1)
		kill(pid, SIGUSR1);
	else
		kill(pid, SIGUSR2);
	usleep(100);
}

void	ft_send(char *str, int pid)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_char_to_bin(str[i], 7, pid);
		i++;
	}
	ft_char_to_bin('#', 7, pid);
}

int	check_correct_args(int argc)
{
	if (argc != 3)
	{
		ft_printf("Error. Incorrect number of arguments\n");
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int		pid;
	int		i;
	char	*str_to_send;

	i = -1;
	if (!check_correct_args(argc))
		return (0);
	pid = ft_atoi(argv[1]);
	str_to_send = argv[2];
	ft_send(str_to_send, pid);
	return (0);
}
