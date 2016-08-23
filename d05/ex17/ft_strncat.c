/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmalepla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 21:21:43 by bmalepla          #+#    #+#             */
/*   Updated: 2016/08/18 21:59:42 by bmalepla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	char *c;
	char *d;

	c = dest;
	d = (char *)src;
	while (*c != '\0')
		c++;
	while (*d != '\0' && nb > 0)
	{
		*c = *d;
		c++;
		d++;
		nb--;
	}
	*c = '\0';
	return (dest);
}
