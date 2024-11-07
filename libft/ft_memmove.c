/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrami <hrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:13:19 by hrami             #+#    #+#             */
/*   Updated: 2024/11/05 10:06:36 by hrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*ptr;
	const unsigned char	*str;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	ptr = (unsigned char *)dest;
	str = (const unsigned char *)src;
	if (ptr > str)
	{
		while (n--)
		{
			ptr[n] = str[n];
		}
	}
	else
	{
		while (i < n)
		{
			ptr[i] = str[i];
			i++;
		}
	}
	return (dest);
}
