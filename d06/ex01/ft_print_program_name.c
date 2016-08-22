/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmalepla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 13:58:52 by bmalepla          #+#    #+#             */
/*   Updated: 2016/08/22 18:24:22 by bmalepla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	if (argc != 0)
	{
		ft_putstr(argv[0]);
		ft_putchar('\n');
	}
	else
	{
		ft_putstr(argv[0]);
		ft_putchar('\n');
	}
	return (0);
}
