/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmalepla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 18:50:41 by bmalepla          #+#    #+#             */
/*   Updated: 2016/08/23 09:38:40 by bmalepla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		j++;
	str = (char*)malloc(sizeof(*str) * (j));
	if (str == NULL)
		return (NULL);
	while (i < j)
	{
		str[i] = src[i];
		i++;
	}
	str[j] = '\0';
	return (str);
}
