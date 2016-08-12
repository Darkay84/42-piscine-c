/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decrypt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmajepla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 10:42:51 by bmalepla          #+#    #+#             */
/*   Updated: 2016/08/12 10:42:54 by bmalepla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include	"ft_perso.h"

t_perso		**ft_decrypt(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**array;

	*array = malloc(sizeof(str) * sizeof(char));
	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] != 0)
		{
			array[k][j] = str[i];
			j++;
		}
		else
		{
			k++;
			j = 0;
		}
		i++;
	}
	free(array);
	return (array);
}
