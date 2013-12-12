/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   name_sort.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nils <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 16:37:49 by nils              #+#    #+#             */
/*   Updated: 2013/12/12 19:57:58 by nils             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef NAME_SORT_H
# define NAME_SORT_H

# include "general.h"
# include "flist_swap.h"


void		name_sort(t_flist *list);
static int	flist_bubble_sort(t_flist *list);

#endif /* !NAME_SORT_H */
