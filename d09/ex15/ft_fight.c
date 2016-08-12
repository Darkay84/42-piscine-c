/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmalepla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 11:31:34 by bmalepla          #+#    #+#             */
/*   Updated: 2016/08/12 11:31:40 by bmalepla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fight.h"
#include "ft_perso.h"

void ft_putstr(char *str)
{
  while (*s)
	{
		write(1, &*s, 1);
		s++;
	}
}

void ft_fight(char *atqnt, char *dfsr, int atck)
{
  while (*dfsr.life > 0)
   {
        *dfsr.life -= atck;
        ft_putstr(*atqnt);
        ft_putstr(" donne un ");
        if (atck = KICK)
          ft_putstr("judo kick");
        else if (atck = PUNCH)
          ft_putstr("judo punch");
        else if (atck = HEADBUTT)
            ft_putstr("judo headbutt");
        ft_putstr(" a ");
        ft_putstr(*dfsr);
        ft_putstr(".\n");
  }
  if (&dfsr.life <= 0)
    {
        ft_putstr(*dfsr.name);
        ft_putstr(" est mort.");
    }
}
