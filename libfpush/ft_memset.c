/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrami <hrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:13:06 by hrami             #+#    #+#             */
/*   Updated: 2024/10/29 17:12:22 by hrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	value;

	i = 0;
	p = (unsigned char *)b;
	value = (unsigned char)c;
	while (i < len)
	{
		p[i] = value;
		i++;
	}
	return (b);
}
