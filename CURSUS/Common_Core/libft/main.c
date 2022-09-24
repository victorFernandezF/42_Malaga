/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:40:53 by victofer          #+#    #+#             */
/*   Updated: 2022/09/24 11:59:52 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	int		i;
	char	**tab;

	i = 0;
	tab = ft_split("      split       this for   me  !       ", ' ');
	while (tab[i])
	{
		printf("string %d : %s\n", i, tab[i]);
		i++;
	}
	return (0);
}
