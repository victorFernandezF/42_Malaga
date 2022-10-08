/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:40:26 by victofer          #+#    #+#             */
/*   Updated: 2022/10/07 12:58:17 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_join(char *str, char ch)
{
	int		i;
	int		j;
	char	*new;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	new = (char *)malloc(sizeof(char) * (i + 2));
	if (!new)
		return (NULL);
	while (j < i)
	{
		new[j] = str[j];
		j++;
	}
	new[j] = ch;
	new[j + 1] = '\0';
	return (new);
}

/* int	main(void)
{
	char	*str;
	char	ch;

	str = "HOLA";
	ch = 'S';
	printf("%s", ft_join(str, ch));
} */
