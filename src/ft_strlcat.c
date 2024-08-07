/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkullana <wkullana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 14:30:48 by wkullana          #+#    #+#             */
/*   Updated: 2024/05/29 17:20:02 by wkullana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;

	dest_len = 0;
	i = 0;
	while (dest[dest_len])
		dest_len++;
	while (i < size - dest_len - 1 && src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + i);
}

// int main(void)
// {
// 	char	dest[5] = "Hello";
//     char	*src = "Amogus";
//     // ft_strlcat(dest, src, 6);
//     printf("%d\n", ft_strlcat(dest, src, 3));
//     // printf("%zu\n", strlcat(dest, src, 6));
//     return 0;
// }