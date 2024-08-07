/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uzimp <uzimp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 11:37:08 by wkullana          #+#    #+#             */
/*   Updated: 2024/08/07 11:26:09 by uzimp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int	length;

	i = 0;
	length = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
		length++;
	}
	dest[i] = '\0';
	return (length);
}
