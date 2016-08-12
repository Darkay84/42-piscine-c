/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmalepla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 09:20:35 by bmalepla          #+#    #+#             */
/*   Updated: 2016/08/10 13:41:49 by bmalepla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_i;
int g_j;
int g_swp;

void	ft_sort_integer_table(int *tab, int size)
{
	g_i = 0;
	g_j = 0;
	g_swp = 0;
	if (tab)
	{
		while (g_i < size)
		{
			while (g_j < size)
			{
				if (tab[g_i] > tab[g_j])
				{
					ft_swap();
				}
				g_j++;
			}
			g_j = g_i + 1;
			g_i++;
		}
	}
}

void	ft_swap(void)
{
	g_swp = tab[g_i];
	tab[g_i] = tab[g_j];
	tab[g_j] = g_swp;
	g_j--;
}
