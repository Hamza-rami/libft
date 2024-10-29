/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrami <hrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:11:42 by hrami             #+#    #+#             */
/*   Updated: 2024/10/28 19:11:20 by hrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = 0;
	srclen = 0;
	i = 0;
	while (src[srclen])
		srclen++;
	while (dstlen < dstsize && dst[dstlen])
		dstlen++;
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	while (src[i] && dstlen + i < dstsize - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}
// int main() {
//     char dest[12] = "Hello";
//     const char *src = " World";
//     size_t result;

//     // Concatenate src to dest, but the buffer size is small (10 bytes)
//     result = ft_strlcat(dest, src, 12);

//     printf("Concatenated String: %s\n", dest);     // "Hello Wor"
//     printf("Total Length Attempted: %zu\n", result); // 11

//     return 0;
// }
