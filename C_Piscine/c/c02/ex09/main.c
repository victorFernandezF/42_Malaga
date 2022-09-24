/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:44:36 by victofer          #+#    #+#             */
/*   Updated: 2022/08/31 17:48:33 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char    *ft_strcapitalize(char *str);
int     ft_is_symbol(char c);
int     ft_is_letter(char c);

int main(void)
{
    char    str[] = "salut, comMent tu vas ? he 42mots quarante-deux; cinquante+et+un";
    //char  str[] = "+e";
    
    //printf("%i", ft_is_symbol('+'));
    //printf("%i", ft_is_letter('e'));
    printf("%s", ft_strcapitalize(str));
}


