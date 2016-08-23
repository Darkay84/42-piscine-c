/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmalepla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 19:31:28 by bmalepla          #+#    #+#             */
/*   Updated: 2016/08/22 19:31:29 by bmalepla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int *tbl;
    
    i = 0;
    if (min >= max)
    {
        *range = 0;
        return (0);
    }
    tbl = (int*)malloc(sizeof(*tbl) * (max - min));
    if (tbl == NULL)
        return (0);
    while (min < max)
    {
        tbl[i] = min;
        min++;
        i++;
    }
    return (tbl);
}
