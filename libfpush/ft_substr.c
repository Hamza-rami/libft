/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrami <hrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:07:17 by hrami             #+#    #+#             */
/*   Updated: 2024/10/27 17:26:20 by hrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncpy(char *dest, char const *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

static int	ft_sstrlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	if (s == NULL)
	{
		return (NULL);
	}
	i = ft_sstrlen(s);
	if (i <= start)
	{
		return (ft_strdup(""));
	}
	if (start + len > i)
	{
		len = i - start;
	}
	sub = malloc(len + 1);
	if (sub == NULL)
	{
		return (NULL);
	}
	ft_strncpy(sub, s + start, len);
	sub[len] = '\0';
	return (sub);
}
