/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_elm.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nils <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 23:41:15 by nils              #+#    #+#             */
/*   Updated: 2013/12/11 23:41:36 by nils             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "add_elm.h"


s_flist		*add_elm(const char *name)
{
  s_flist	*new_elm;

  new_elm = (s_flist *)malloc(sizeof(s_flist) * 1);
  new_elm->name = ft_strdup(name);
  new_elm->sstat = NULL;
  new_elm->next = NULL;
  return (new_elm);
}
