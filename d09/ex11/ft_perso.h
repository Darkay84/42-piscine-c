/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmalepla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 04:55:16 by bmalepla          #+#    #+#             */
/*   Updated: 2016/08/12 04:55:20 by bmalepla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef FT_PERSO_H
# define FT_PERSO_H

#include <string.h>

# define SAVE_AUSTIN_POWERS "lololol";


typedef struct {
    char	*name;
    float	life;
    int		age;
    char	*profession;
} t_perso;
#endif