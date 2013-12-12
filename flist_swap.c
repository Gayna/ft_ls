/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flist_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nils <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 15:15:06 by nils              #+#    #+#             */
/*   Updated: 2013/12/12 19:54:22 by nils             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "flist_swap.h"

void	flist_swap(t_flist *f1, t_flist *f2)
{
	t_flist	*tmp;
	t_flist	*next_tmp;

	tmp = f1;
	next_tmp = f1->next;
	f1 = f2;
	f2 = tmp;
	f2->next = f1->next;
	f1->next = next_tmp;
	return ;
}
