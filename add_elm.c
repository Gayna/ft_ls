/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_elm.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nils <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 23:41:15 by nils              #+#    #+#             */
/*   Updated: 2013/12/12 19:49:59 by nils             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "add_elm.h"


t_flist		*add_elm(const char *name)
{
  t_flist	*new_elm;

  new_elm = (t_flist *)malloc(sizeof(t_flist) * 1);
  new_elm->name = ft_strdup(name);
  new_elm->sstat = NULL;
  new_elm->next = NULL;
  return (new_elm);
}
