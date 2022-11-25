/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:00:03 by victofer          #+#    #+#             */
/*   Updated: 2022/11/25 18:18:32 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hidenp(char *s1, char *s2)
{
	int	i;
	int	j;
	int	flag;
	int	len;

	i = 0;
	j = 0;
	flag = 0;
	len = 0;
	while (s1[len])
		len++;
	while (s1[i])
	{
		while (s2[j])
		{
			if (s1[i] == s2[j])
			{
				flag++;
				i++;
			}
			else
				j++;
		}
		break ;
	}
	if (len == flag)
		ft_putchar('1');
	else
		ft_putchar('0');
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putchar(10);
		return (0);
	}
	if (argv[1][0] == '\0')
		ft_putchar('1');
	else
		ft_hidenp(argv[1], argv[2]);
	ft_putchar(0);
	return (0);
}
