/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victofer <victofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 09:37:27 by victofer          #+#    #+#             */
/*   Updated: 2022/11/28 09:58:30 by victofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int		aux;
	t_list	*tmp;

	tmp = lst;
	while (lst->next != NULL)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			aux = lst->data;
			lst->data = lst->next->data;
			lst->next->data = aux;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}
