/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmalepla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 00:04:42 by bmalepla          #+#    #+#             */
/*   Updated: 2016/08/22 09:10:15 by bmalepla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char g_buff[1000];
char g_nbr[] = "0123546789";
int g_cmptr;
int g_tmp;
int g_fnl;
int g_base;
int g_flag;

void	fndbs(char *bs)
{
	int i;

	i = 0;
	while (bs[i])
	{
		g_nbr[i] = bs[i];
		i++;
	}
	g_base = i;
}

int		ft_correct(int nbr, char *base)
{
	int i;
	int ji;
	int jj;

	ji = 0;
    jj = 0;while (base[ji] != '\0')
    {
        jj = ji + 1;
        while (base[jj])
        {
            if (base[ji] == base[jj])
            {
                g_flag = 1;
            }
            jj++;
        }
        ji++;
    }

	while (*base)
	{
		if (*base == '+' || *base == '-')
			g_flag = 1;
        base++;
	}
    if (nbr == ' ' || (nbr >= 9 && nbr <= 13))
		return (0);
	if (nbr == '0')
	{
		return (0);
	}
	if (nbr == '-' || nbr == '+')
		return (0);
	else
		return (1);
}

void	ft_defines(void)
{
	g_cmptr = 0;
	g_tmp = 0;
	g_fnl = 0;
	g_flag = 0;
}

void	ft_putnbr_base(int nbr, char *base)
{
    fndbs(base);
	ft_defines();
	if (nbr < 0)
	{
		g_fnl++;
		ft_putchar('-');
	}
	while (nbr)
	{
		if (ft_correct(nbr, base))
		{
			g_tmp = nbr % g_base;
			g_tmp = (g_tmp < 0) ? -g_tmp : g_tmp;
			g_buff[g_cmptr] = g_nbr[g_tmp];
			g_cmptr++;
			nbr /= g_base;
		}
		else
			nbr++;
	}
	while (g_cmptr >= 0 && g_flag == 0)
	{
        g_cmptr--;
		ft_putchar(g_buff[g_cmptr]);
	}
}
