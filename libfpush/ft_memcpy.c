/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrami <hrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:38:41 by hrami             #+#    #+#             */
/*   Updated: 2024/10/24 14:38:46 by hrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*ptr;
	const unsigned char	*str;

	if (dest == NULL && src == NULL)
	{
		return (NULL);
	}
	i = 0;
	ptr = (unsigned char *)dest;
	str = (const unsigned char *)src;
	while (i < n)
	{
		ptr[i] = str[i];
		i++;
	}
	return (dest);
}
// int main()
// {
//     // char dest[10];
//     char src[] = "hamzaramirise";
//     ft_memcpy(src + 5,src,2);
//     int  i;
//     i = 0;
//     while (i < 5)
//     {
//         printf("%c",src[i]);
//         i++;
//     }
//     return 0;
// }
