/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decrypt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmalepla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 10:42:51 by bmalepla          #+#    #+#             */
/*   Updated: 2016/08/12 10:42:54 by bmalepla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include	"ft_perso.h"

t_perso		**ft_decrypt(char *str)
{
	int		k;
	int		l;
	int		m;
	char	**array;

	*array = malloc(sizeof(str) * sizeof(char));
	k = 0;
	l = 0;
	m = 0;
	while (str[k])
	{
		if (str[k] != 0)
		{
			array[m][l] = str[k];
			l++;
		}
		else
		{
			m++;
			l = 0;
		}
		k++;
	}
	free(array);
	return (array);
}
