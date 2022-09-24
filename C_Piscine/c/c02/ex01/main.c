/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:44:36 by victofer          #+#    #+#             */
/*   Updated: 2022/08/31 17:44:37 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>
#include <string.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
    char dest[20] = "hola";
    char src[20] = "mundo";
            
    printf("RESULTADO FUNCION REAL: %s", strncpy(dest, src, 4));
    printf("\n MI RESULTADO: %s \n", ft_strncpy(dest, src, 4));
    return (0);
}