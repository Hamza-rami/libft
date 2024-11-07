/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrami <hrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:12:44 by hrami             #+#    #+#             */
/*   Updated: 2024/11/05 11:45:16 by hrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	c1;
	int				i;

	c1 = (unsigned char)c;
	i = 0;
	while (str[i])
	{
		if (str[i] == c1)
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	if (c1 == '\0')
		return ((char *)&str[i]);
	return (NULL);
}
