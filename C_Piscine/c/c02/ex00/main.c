/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:43:30 by victofer          #+#    #+#             */
/*   Updated: 2022/08/31 17:43:32 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char    *ft_strcpy(char *dest, char *str);

int main(void)
{
    char    dest[] = "destino";
    char    str[] = "Copia";
    printf("%s", ft_strcpy(dest, str));
}