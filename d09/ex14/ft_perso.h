/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/11 10:53:02 by qle-guen          #+#    #+#             */
/*   Updated: 2015/09/11 12:44:24 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define	SAVE_AUSTIN_POWERS "lol"
#include <string.h>

struct	a
{
    char	*name;
    float	life;
    int		age;
    int		profession;
};

typedef	struct a t_perso;