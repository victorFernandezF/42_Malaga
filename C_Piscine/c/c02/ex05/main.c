/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:44:36 by victofer          #+#    #+#             */
/*   Updated: 2022/08/31 17:47:18 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_str_is_uppercase(char *str);

int main(void)
{
    int print = ft_str_is_uppercase("HOLA MUNDO");
    printf("%i", print);
}

