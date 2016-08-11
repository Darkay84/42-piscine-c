/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmalepla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 19:05:58 by bmalepla          #+#    #+#             */
/*   Updated: 2016/08/11 20:17:05 by bmalepla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int g_i;
int g_j;

void	ft_printh(void)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
}

void	ft_takes_place(int hour)
{
	g_i = hour;
	if (hour >= 12)
		g_i = hour % 12;
	if (g_i == 0 && hour == 12)
		g_i = 12;
	ft_printh();
	if (hour == 0)
		printf("12.00 A.M. AND 1.00 A.M.\n");
	else if (hour < 11)
		printf("%d.00 A.M. AND %d.00 A.M.\n", g_i, g_i + 1);
	else if (hour == 11)
		printf("11.00 A.M. AND 12.00 P.M.\n");
	else if (hour == 12)
		printf("%d.00 P.M. AND %d.00 P.M.\n", g_i, g_i - 11);
	else if (hour <= 23)
		printf("%d.00 P.M. AND %d.00 P.M.\n", g_i, g_i + 1);
	else if (hour == 24)
		printf("12.00 P.M. AND %d.00 A.M.\n", g_i + 1);
}
