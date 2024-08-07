/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uzimp <uzimp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 19:12:23 by uzimp             #+#    #+#             */
/*   Updated: 2024/08/07 20:51:43 by uzimp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* strchr example */
#include <unistd.h>
#include <stdio.h>

char *ft_strchr(const char *str, int search_str)
{
	unsigned char unsigned_str;

	unsigned_str = (unsigned) search_str;
	if (unsigned_str == '\0')
		return ((char *)&str[ft_strlen(str)]);
	while(*str != '\0')
	{
		if(*str == search_str)
			return ((char *)str);
		str++;
	}
	return (NULL);
}

int main(void)
{
  char str[] = "This is a sample string";
  char * pch;
  printf ("Looking for the 's' character in \"%s\"...\n",str);
  pch = ft_strchr(str,'s');
  while (pch!= NULL)
  {
    printf ("found at %ld\n",pch-str+1);
    pch = ft_strchr(pch+1,'s');
  }
  return 0;
}