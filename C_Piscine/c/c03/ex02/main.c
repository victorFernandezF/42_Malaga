/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:57:01 by victofer          #+#    #+#             */
/*   Updated: 2022/08/31 17:57:06 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char    *ft_strcat(char *dest, char *src);

int main (void)
{
    char dest[50] = "hello";
    char src[50] = "world";

    printf("%s \n", ft_strcat(dest, src));
}