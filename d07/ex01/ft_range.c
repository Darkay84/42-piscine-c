/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmalepla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 19:13:30 by bmalepla          #+#    #+#             */
/*   Updated: 2016/08/22 19:13:31 by bmalepla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
    int i;
    int *tbl;
    
    i = 0;
    
    if (min >= max)
        return (0);
    tbl = (int*)malloc(sizeof(*tbl) * (max - min));
    while (min < max)
    {
        tbl[i] = min;
        min++;
        i++;
    }
    return (tbl);
}
