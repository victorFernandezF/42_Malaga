/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 11:51:34 by victofer          #+#    #+#             */
/*   Updated: 2022/08/31 11:01:14 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_recursive_power(int nb, int power);

int	main(int argc, char *argv[])
{
	int	nb;
	int	power;

	if (argc < 2)
		return (0);
	nb = atoi(argv[1]);
	power = atoi(argv[2]);
	printf("%i\n", ft_recursive_power(nb, power));
	return (0);
}
