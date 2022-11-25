/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:39:03 by victofer          #+#    #+#             */
/*   Updated: 2022/11/24 18:51:44 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

/* int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
} */

char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	aux;

	i = 0;
	len = 0;
	while (str[len])
		len++;
	len -= 1;
	while (i < len)
	{
		aux = str[i];
		str[i] = str[len];
		str[len] = aux;
		i++;
		len--;
	}
	return (str);
}

int	main(void)
{
	char	s[] = "hola";

	printf("%s", ft_strrev(s));
}
