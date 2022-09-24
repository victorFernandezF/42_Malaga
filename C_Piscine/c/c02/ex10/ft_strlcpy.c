/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:06:43 by victofer          #+#    #+#             */
/*   Updated: 2022/08/22 12:52:12 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	count;

	count = 0;
	while (src[count] != 0)
	{
		count++;
	}
	if (size != 0)
	{
		i = 0;
		while ((src[i] != 0) && (i < size))
		{
			dest[i] = src[i];
			i++;
		}		
	}
	return (count);
}
