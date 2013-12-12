/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_ftype.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nils <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 23:01:23 by nils              #+#    #+#             */
/*   Updated: 2013/12/13 00:13:32 by nils             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_ftype.h"

void	get_ftype(t_flist *list)
{
	DIR		*dir_tmp;
	char	*link_buf;
	t_stat	sstat;
	ssize_t	rd;

	dir_tmp = malloc(sizeof(DIR));
}
