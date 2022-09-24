/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:44:36 by victofer          #+#    #+#             */
/*   Updated: 2022/08/31 17:45:03 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>

int ft_str_is_alpha(char *str);

int main(void)
{
    int alpha = ft_str_is_alpha("Pe3RrO");
    printf("%i", alpha);
}
