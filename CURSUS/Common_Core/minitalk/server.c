/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 11:04:38 by victofer          #+#    #+#             */
/*   Updated: 2022/11/09 12:46:48 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

/*
When ctrl+c is press the server shows a message, wait 3 seconds,
it close itself and no more server.
*/
static void	bye_server(int signum)
{
	int		pid;

	signum = 9;
	pid = getpid();
	ft_printf("\nServer will close in  ");
	sleep(1);
	ft_printf("3... ");
	sleep(1);
	ft_printf("2... ");
	sleep(1);
	ft_printf("1... ");
	sleep(1);
	ft_printf("\nBYE :)\n\n");
	kill (pid, 9);
}

/* SIGUSR1 -> 1
   SIGUSR2 -> 0
 */
void	signal_handler(int signum)
{
	static int				i;
	static unsigned char	letter;

	if (signum == SIGUSR1)
		letter = letter << 1 | 1;
	else if (signum == SIGUSR2)
		letter = letter << 1 | 0;
	i++;
	if (i == 8)
	{
		if (!letter)
			ft_putchar_fd(10, 1);
		else if (letter == 35)
			ft_putchar_fd(10, 1);
		else
		{
			ft_putchar_fd(letter, 1);
		}
		i = 0;
		letter = 0;
		usleep (100);
	}
}

int	main(void)
{
	int					pid;

	pid = (int)getpid();
	ft_printf("Server pid: %i\nStatus: Active waiting... \n", pid);
	signal(SIGUSR1, signal_handler);
	signal(SIGUSR2, signal_handler);
	ft_printf("\n");
	signal(SIGINT, bye_server);
	while (1)
	{
	}
	return (0);
}
