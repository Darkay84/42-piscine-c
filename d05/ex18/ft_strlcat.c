/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmalepla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 22:41:45 by bmalepla          #+#    #+#             */
/*   Updated: 2016/08/21 22:46:45 by bmalepla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				j;
	int				rtrn_sz;

	i = 0;
	j = 0;
	rtrn_sz = 0;
	while (src[rtrn_sz] != '\0')
		rtrn_sz++;
	while (dest[i] != '\0')
		i++;
	while (*src != '\0' && j < size)
	{
		dest[i + j] = *src;
		src++;
		j++;
	}
	dest[i + j] = '\0';
	return (rtrn_sz + size);
}
