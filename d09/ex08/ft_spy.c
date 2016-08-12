/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmalepla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 01:56:16 by bmalepla          #+#    #+#             */
/*   Updated: 2016/08/12 03:42:49 by bmalepla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *s)
{
	while (*s)
	{
		write(1, &*s, 1);
		s++;
	}
}

int		ft_strcmp(char *str1, char *str2)
{
	while (*str1 || *str2)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}

void	ft_check_words(char *str)
{
	if (ft_strcmp(str, "attack") == 0)
		ft_putstr("Alert!!!\n");
	if (ft_strcmp(str, "powers") == 0)
		ft_putstr("Alert!!!\n");
	if (ft_strcmp(str, "president") == 0)
		ft_putstr("Alert!!!\n");
}

char	*ft_format(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	char	str[9001];
	int		i;
	int		j;
	int		k;

	i = 1;
	while (i < argc)
	{
		j = 0;
		k = 0;
		while (argv[i][j])
		{
			if (argv[i][j] != ' ')
			{
				str[k] = argv[i][j];
				k++;
			}
			j++;
		}
		str[j] = '\0';
		ft_format(str);
		ft_check_words(str);
		i++;
	}
	return (0);
}
