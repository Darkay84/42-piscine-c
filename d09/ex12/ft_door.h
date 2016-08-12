/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmalepla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 09:49:09 by bmalepla          #+#    #+#             */
/*   Updated: 2016/08/12 09:49:14 by bmalepla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef FT_DOOR_H
# define FT_DOOR_R
#include <unistd.h>
#include <string.h>

# define CLOSE 0;
# define TRUE 1;
# define OPEN 1;
# define EXIT_SUCCESS 0;

typedef int t_ft_bool;

typedef struct t_door
{
    int state;
}

void open_door(t_door *door);
void close_door(t_door *door);
t_ft_bool is_door_open(t_door *door);
t_ft_bool is_door_close(t_door *door);
#endif
