/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   name_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nils <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 15:51:14 by nils              #+#    #+#             */
/*   Updated: 2013/12/12 19:57:42 by nils             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "name_sort.h"


void		name_sort(t_flist *list)
{
	size_t	it;
	size_t	n;
	int		flag;

	it = 0;
	flag = NOT_SORTED;
	n = flist_size(list);
	while (it < n -1 && flag != SORTED)
		flag = flist_bubble_sort(list);
	return ;
}


static int	flist_bubble_sort(t_flist *list)
{
	int	res;

	res = SORTED;
	while (list->next != NULL)
	{
		if ((ft_strcmp(list->name, list->next->name)) != 0)
		{
			flist_swap(list, list->next);
			res = NOT_SORTED;
		}
		list = list->next;
	}
	return (res);
}
