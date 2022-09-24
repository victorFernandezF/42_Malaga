/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 11:51:34 by victofer          #+#    #+#             */
/*   Updated: 2022/08/31 12:45:09 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_iterative_power(int nb, int power);

int	main(int argc, char *argv[])
{
	if (argc < 2)
		return (0);
	printf("%i\n", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}
