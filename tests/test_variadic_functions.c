/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_variadic_functions.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:13:11 by victofer          #+#    #+#             */
/*   Updated: 2022/10/03 18:30:13 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

/*
A variadic function is a function that can take a variable number of
arguments. arg 1 -> number of args.  [...] -> all args you want to include
*/

//EXAMPLE
int	add_numbers(int n, ...) //variadic function to sum numbers
{
	int		sum;
	int		i;
	va_list	ptr; //pointer to the variable list

	sum = 0;
	i = 0;
	va_start(ptr, n); //initialize argument to the list pointer
	while (i < n)
	{
		//accesing current var and pointing to next one
		sum += va_arg(ptr, int); 
		i++;
	}
	va_end(ptr); //end srgument list
	return (sum);
}

int	main(void)
{
	printf(" 1 + 2 + 1 = %d ", add_numbers(3, 1, 2, 'a'));
	return (0);
}
