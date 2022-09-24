/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 11:51:34 by victofer          #+#    #+#             */
/*   Updated: 2022/08/31 11:20:16 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_fibonacci(int index);

int	main(int argc, char *argv[])
{
	if (argc < 2)
		return (0);
	printf("%i\n", ft_fibonacci(atoi(argv[1])));
	return (0);
}
