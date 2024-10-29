/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrami <hrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:06:27 by hrami             #+#    #+#             */
/*   Updated: 2024/10/24 23:08:38 by hrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
	}
	return (c);
}
// int main() {
//     char lower = 127;
//     char upper = toupper(lower);
//     printf("Uppercase of %c is %c\n", lower, upper);  // Shou
//     char noChange = 'G';
//     printf("Uppercase of %c is %c\n", noChange, toupper(noC
//     return 0;
// }
