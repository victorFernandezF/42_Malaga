/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 18:03:19 by victofer          #+#    #+#             */
/*   Updated: 2022/08/21 11:05:23 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	j;
	int	alpha;

	i = 0;
	alpha = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65) && (str[i] <= 90))
			alpha = 1;
		else if (((str[i] >= 97) && (str[i] <= 122)))
			alpha = 1;
		else
			return (0);
		i++;
	}
	return (alpha);
}
