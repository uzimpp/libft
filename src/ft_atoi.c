/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uzimp <uzimp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:09:33 by wkullana          #+#    #+#             */
/*   Updated: 2024/08/07 11:35:44 by uzimp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	num;
	int	negative_signs;
	int	index;

	index = 0;
	num = 0;
	negative_signs = 0;
	while ((9 <= str[index] && str[index] <= 13) || str[index] == 32)
		index++;
	while (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			negative_signs++;
		index++;
	}
	while ('0' <= str[index] && str[index] <= '9')
	{
		num = (num * 10) + (str[index] - 48);
		index++;
	}
	if ((negative_signs % 2) != 0)
		return (-num);
	return (num);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_atoi("--2345345a3"));
// }