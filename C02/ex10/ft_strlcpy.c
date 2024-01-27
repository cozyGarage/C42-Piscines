/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trunnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:15:23 by trunnguy          #+#    #+#             */
/*   Updated: 2024/01/23 18:01:12 by trunnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (src == 0 || dest == 0)
		return (0);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}
/*#include <stdio.h>
int main(void)
{
		char src[255];
		char dest[1];
		unsigned int	size;
		printf("Enter the source string:\n");
		scanf("%s", src);
		printf("Enter the number element of string you want to copy:\n" );
		scanf("%u", &size);
		ft_strlcpy(dest, src, size);
		printf("%s\n", dest);
		return 0;
}*/
