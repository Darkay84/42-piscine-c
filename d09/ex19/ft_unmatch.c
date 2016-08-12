/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmalepla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 13:59:59 by bmalepla          #+#    #+#             */
/*   Updated: 2016/08/12 14:21:47 by bmalepla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int length)
{
	int i;
	int j;
	int k;

	j = 0;
	while (j < length)
	{
		i = 0;
		k = 0;
		while (i < length)
		{
			if (i != j)
				if (tab[i] == tab[j])
				{
					k = 1;
					break ;
				}
			i++;
		}
		if (!k)
			return (tab[j]);
		j++;
	}
	return (tab[j]);
}
