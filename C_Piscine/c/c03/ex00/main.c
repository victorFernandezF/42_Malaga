/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:56:35 by victofer          #+#    #+#             */
/*   Updated: 2022/08/31 17:56:37 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
    char    s1[] = "helloo";
    char    s2[] = "hell";

    printf("RESULTADO FUNCION REAL: %i \n", strcmp(s1, s2));
    printf("MI RESULTADO: %i \n", ft_strcmp(s1, s2));
    return (0);
}
