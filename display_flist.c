/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_flist.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nils <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 19:32:34 by nils              #+#    #+#             */
/*   Updated: 2013/12/12 19:49:34 by nils             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "display_flist.h"

void display_flist(t_flist *list)
{
	while (list->next != NULL)
	{
		// enhance later
		simple_display(list)
		list = list->next;
	}
	return ;
}

static void simple_display(t_flist *list)
{
	ft_putstr(list->name);
	ft_putchar('\n');
	return ;
}
