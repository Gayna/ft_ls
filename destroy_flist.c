/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_flist.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nils <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 23:42:04 by nils              #+#    #+#             */
/*   Updated: 2013/12/11 23:44:57 by nils             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "destroy_flist.h"

void	destroy_flist(t_flist  *flist)
{
  t_flist *next;

  next = flist->next;
  while (flist->next != NULL)
  {
    free(flist->name);
    if (flist->sstat != NULL)
      free(flist->sstat);
    free(flist);
    flist = next;
  }
  free(flist->name);
  if (flist->sstat != NULL)
    free(flist->sstat);
  free(flist);
  return ;
}
