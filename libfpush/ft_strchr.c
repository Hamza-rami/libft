/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrami <hrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:12:44 by hrami             #+#    #+#             */
/*   Updated: 2024/10/28 20:54:17 by hrami            ###   ########.fr       */
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

// int main() {
//     const char *str = "Hello, World!";
//     // Test cases
//     char *result1 = ft_strchr(str, 'W');
//     printf("Result for 'W': %s\n", result1 ? result1 : "Not found");
//     char *result2 = ft_strchr(str, 'o');
//     printf("Result for 'o': %s\n", result2 ? result2 : "Not found");
//     char *result3 = ft_strchr(str, 'z');
//     printf("Result for 'z': %s\n", result3 ? result3 : "Not found");
//     char *result4 = ft_strchr(str, '\0');
//     printf("Result for null terminator: %s\n"
//     return 0;
// }
