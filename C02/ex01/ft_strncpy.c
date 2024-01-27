/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trunnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:51:39 by trunnguy          #+#    #+#             */
/*   Updated: 2024/01/21 20:05:53 by trunnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
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
/*#include <stdio.h>
#include <string.h>
int	main()
{
	char src[] = "Hallo Leute!!";
	char src1[] = "123456789";
	char dest[30];
	char dest1[20];
	unsigned int    n = 8;
	printf("%s", ft_strncpy(dest, src, n));
	printf("\n%s", strncpy(dest1, src1, n));
}*/
/*
char dest2[] = "";
char dest1[] = "";

These declarations create character arrays with size 1, initialized with a
null terminator. When you use ft_strncpy and strncpy to copy the source
strings (src2 and src1) into these destination arrays, you are overwriting
the null terminator with characters from the source strings, and since the
destination arrays are not large enough to hold the entire source strings,
you may end up with undefined behavior.*/
