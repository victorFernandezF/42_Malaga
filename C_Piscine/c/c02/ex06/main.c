/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:44:36 by victofer          #+#    #+#             */
/*   Updated: 2022/08/31 17:47:42 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

#include<stdio.h>
int ft_str_is_printable(char *str);

int main(void)
{
    int print = ft_str_is_printable("HOLA_MUNDO[42]");
    printf("%i", print);
}

