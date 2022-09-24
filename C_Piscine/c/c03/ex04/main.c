/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:57:33 by victofer          #+#    #+#             */
/*   Updated: 2022/08/31 17:57:35 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char    *ft_strstr(char *str, char *to_find);

int main(void)
{
    printf("%s", strstr("El veloz murcielago hindu comia feliz cardillo y kiwi", "feliz"));
    return (0);
}