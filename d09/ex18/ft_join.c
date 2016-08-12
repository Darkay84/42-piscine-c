/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmalepla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 13:29:07 by bmalepla          #+#    #+#             */
/*   Updated: 2016/08/12 13:56:59 by bmalepla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_join(char **tab, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*rtrn;

	i = 0;
	j = 0;
	rtrn = malloc((sizeof(tab) + sizeof(sep)) * sizeof(char));
	while (tab[i][0])
	{
		j = 0;
		while (tab[i][j])
		{
			rtrn[k] = tab[i][j];
			j++;
			k++;
		}
		j++;
	}
	free(rtrn);
	return (rtrn);
}
