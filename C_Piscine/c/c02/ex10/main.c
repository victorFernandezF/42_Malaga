/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:44:36 by victofer          #+#    #+#             */
/*   Updated: 2022/08/31 17:48:49 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
    char dest[]="Destino";
    char src[]="Copia";
    int size = 5;
    
    printf("RESULTADO FUNCON REAL: %lu \n", strlcpy(dest, src, size));
    printf("MI RESULTADO: %i \n", ft_strlcpy(dest, src, size));
    return (0);
}

