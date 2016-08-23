/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmalepla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 18:59:56 by bmalepla          #+#    #+#             */
/*   Updated: 2016/08/23 18:59:57 by bmalepla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

#define WHITESPACED(a) (a == ' ' || a == '\t' || a == '\n')

int		cnt_wrds(char *str)
{
	int i;
	int rtrn;
	int flag;

	i = 0;
	rtrn = 0;
	flag = 0;
	while (WHITESPACED(str[i]))
		i++;
	while (str[i])
	{
		while (!WHITESPACED(str[i]))
		{
			flag = 1;
			i++;
		}
		if (WHITESPACED(str[i]))
		{
			if (flag == 1)
				rtrn += flag;
			flag = 0;
			i++;
		}
	}
	return (rtrn);
}

int		sz_wrds(char *str, int in)
{
	int count;

	count = 0;
	while (!WHITESPACED(str[in]))
	{
		in++;
		count++;
	}
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	char	**rtrn;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if ((rtrn = malloc(sizeof(char*) * (cnt_wrds(str) + 1))) == NULL)
		return (NULL);
	while (str[i])
	{
		while (WHITESPACED(str[i]) && str[i])
			i++;
		if (str[i])
		{
			k = 0;
			if ((rtrn[j] = malloc(sizeof(char) * sz_wrds(str, i) + 1)) == NULL)
				return (NULL);
			while (!(WHITESPACED(str[i])) && str[i])
				rtrn[j][k++] = str[i++];
			rtrn[j++][k] = '\0';
		}
	}
	rtrn[j] = NULL;
	return (rtrn);
}
