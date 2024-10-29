/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrami <hrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:12:28 by hrami             #+#    #+#             */
/*   Updated: 2024/10/28 19:26:29 by hrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	char	*arr;

	if (num == 0 || size == 0)
	{
		return (malloc(0));
	}
	arr = malloc(num * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	ft_bzero (arr, num * size);
	return ((void *)arr);
}
