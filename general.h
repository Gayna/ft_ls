/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nils <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 23:42:17 by nils              #+#    #+#             */
/*   Updated: 2013/12/13 00:13:34 by nils             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GENERAL_H
# define GENERAL_H

# include <unistd.h>
# include <stdlib.h>
# include <dirent.h>
# include "libft.h"


# define SORTED 0
# define NOT_SORTED 1
# define IS_DIR 3
# define IS_LINK 2
# define IS_FILE 1
# define IS_ERR 0

typedef struct  stat t_stat;

typedef struct      s_flist
{
    char            *name;
    t_stat          *sstat;
	int		 		type;
	struct s_flist  *next;
}                   t_flist;

#endif /* !GENERAL_H */
