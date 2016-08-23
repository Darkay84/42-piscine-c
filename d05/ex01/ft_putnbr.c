/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmalepla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 12:07:58 by bmalepla          #+#    #+#             */
/*   Updated: 2016/08/22 01:05:31 by bmalepla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char g_buff[1000];
char g_nbr[] = "0123456789";
int g_cmptr;
int g_tmp;
int g_fnl;
int g_base;

void	ft_putnbr(int nb)
{
	g_cmptr = 0;
	g_tmp = 0;
	g_fnl = 0;
	g_base = 10;
	if (nb < 0)
	{
		g_fnl++;
		ft_putchar('-');
	}
	while (nb != '\0')
	{
		g_tmp = nb % g_base;
		g_tmp = (g_tmp < 0) ? -g_tmp : g_tmp;
		g_buff[g_cmptr] = g_nbr[g_tmp];
		g_cmptr++;
		nb /= g_base;
	}
	while (g_cmptr >= 0)
	{
		ft_putchar(g_buff[g_cmptr]);
		g_cmptr--;
	}
}
