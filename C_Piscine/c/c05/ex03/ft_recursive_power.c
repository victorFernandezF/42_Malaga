/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 10:51:23 by victofer          #+#    #+#             */
/*   Updated: 2022/08/31 11:05:15 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;

	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	else
	{
		res = nb * ft_recursive_power(nb, power - 1);
		return (res);
	}
	return (0);
}
