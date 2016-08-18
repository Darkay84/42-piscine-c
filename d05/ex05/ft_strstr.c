/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmalepla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 17:57:32 by bmalepla          #+#    #+#             */
/*   Updated: 2016/08/18 07:30:02 by bmalepla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	if (to_find[0] == '\0')
		return (char*)(str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] == to_find[j])
		{
			i++;
			j++;
			if (to_find[j] == '\0')
				return (char *)(&str[i - j]);
		}
		i -= j;
		i++;
	}
}
