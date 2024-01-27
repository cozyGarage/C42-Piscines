/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trunnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:45:17 by trunnguy          #+#    #+#             */
/*   Updated: 2024/01/14 17:50:44 by trunnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char src[] = "42ViennaSchool";
	char src1[] = "42ViennaSchool";
	char dest[] = "Change me!";
	char dest1[] = "Change my ass!";
	printf("%s\n", ft_strcpy(dest, src));
	printf("%s\n", strcpy(dest1, src1));
}*/
