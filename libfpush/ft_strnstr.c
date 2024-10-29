/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrami <hrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:07:47 by hrami             #+#    #+#             */
/*   Updated: 2024/10/27 17:22:56 by hrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j]
				&& haystack[i + j] == needle[j] && (i + j) < len)
			{
				j++;
			}
			if (needle[j] == '\0')
			{
				return ((char *)&haystack[i]);
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}
