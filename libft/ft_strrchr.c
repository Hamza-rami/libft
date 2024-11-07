/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrami <hrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:07:34 by hrami             #+#    #+#             */
/*   Updated: 2024/10/24 14:07:41 by hrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	if (c == '\0')
		return ((char *)&str[i]);
	while (i >= 0)
	{
		if (str[i] == (char)c)
		{
			return ((char *)&str[i]);
		}
		i--;
	}
	return (NULL);
}
