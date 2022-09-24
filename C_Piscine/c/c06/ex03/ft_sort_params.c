/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 10:20:25 by victofer          #+#    #+#             */
/*   Updated: 2022/08/30 18:26:29 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar(10);
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] == str2[i])
	{
		if (str1[i] == '\0' || str2[i] == '\0')
			return (0);
		i++;
	}
	return (str1[i] - str2[i]);
}

int	main(int numargs, char *args[])
{
	int		i;
	int		find;
	char	*aux;

	find = 1;
	while (find == 1)
	{
		find = 0;
		i = 0;
		while (++i < numargs -1)
		{
			if (ft_strcmp(args[i], args[i + 1]) > 0)
			{
				aux = args[i];
				args[i] = args[i + 1];
				args[i + 1] = aux;
				find = 1;
			}
		}
	}
	i = 0;
	while (++i < numargs)
		ft_putstr(args[i]);
	ft_putchar(10);
	return (0);
}
