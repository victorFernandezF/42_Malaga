/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:57:19 by victofer          #+#    #+#             */
/*   Updated: 2022/08/31 17:57:21 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char    *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
    char    s1[] = "hola";
    char    s2[] = "mundo";
    int     n = 2;
    
    printf("%s", ft_strncat(s1,s2,n));
    return (0);
}