/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:56:49 by victofer          #+#    #+#             */
/*   Updated: 2022/08/31 17:56:51 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);
int ft_countstr(char *str, unsigned int n);

int main(void)
{
    char    s1[] = "hello";
    char    s2[] = "hel";
    int     n = 5;
    printf("RESULTADO FUNCION REAL: %i \n", strncmp(s1,s2,n));
    printf("MI RESULTADO: %i \n", ft_strncmp(s1,s2,n));
    return (0);
}