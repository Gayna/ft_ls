/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nils <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 23:42:17 by nils              #+#    #+#             */
/*   Updated: 2013/12/11 23:42:23 by nils             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GENERAL_H
# define GENERAL_H

# include <unistd.h>
# include <stdlib.h>
# include <dirent.h>

typedef struct  stat t_stat;

typedef struct      s_flist
{
    char            *name;
    t_stat          *sstat;
    struct s_flist  *next;
}                   t_list;

#endif /* !GENERAL_H */
