/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trunnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 20:21:28 by trunnguy          #+#    #+#             */
/*   Updated: 2024/01/15 17:24:40 by trunnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		s;

	i = 0;
	s = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (s == 1)
				str[i] -= 32;
			s = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			s = 0;
		else
			s = 1;
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int	main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+u";
	char str1[] = "diu jnd von, odficj, dc dfOv. sk ddn nd8-cd jc sdc";
	printf("%s", ft_strcapitalize(str));
	printf("\n%s", ft_strcapitalize(str1));
}*/
