/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_fstat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nils <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 00:28:04 by nils              #+#    #+#             */
/*   Updated: 2013/12/12 01:34:23 by nils             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_fstat.h"

int	get_fstat(t_flist *file)
{
	int	res;

	file->sstat = (t_stat *) malloc(sizeof(t_stat));
	res = stat(file->name, file->sstat);
	return (res);
}
