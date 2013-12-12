/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_flist.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nils <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 23:42:04 by nils              #+#    #+#             */
/*   Updated: 2013/12/12 19:51:19 by nils             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "destroy_flist.h"

void	destroy_flist(t_flist  *list)
{
  t_flist *next;

  next = list->next;
  while (list->next != NULL)
  {
    free(list->name);
    if (list->sstat != NULL)
      free(list->sstat);
    free(list);
    list = next;
  }
  free(list->name);
  if (list->sstat != NULL)
    free(list->sstat);
  free(list);
  return ;
}
