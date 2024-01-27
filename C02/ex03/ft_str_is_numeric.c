/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trunnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 19:34:51 by trunnguy          #+#    #+#             */
/*   Updated: 2024/01/15 17:06:55 by trunnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	res;

	i = 0;
	if (str[i] == '\0')
	{
		res = 1;
		return (res);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			res = 1;
			i++;
		}
		else
		{
			res = 0;
			return (res);
		}
	}
	return (res);
}
/*#include<stdio.h>
int main(void)
{
    char str[] = "1231343029423984";
    printf("%d\n", ft_str_is_numeric(str));
    printf("%d", ft_str_is_numeric("abcdefghijkl"));
    printf("\n%d", ft_str_is_numeric("abc1defghijkl"));
    printf("\n%d", ft_str_is_numeric("134556efghij67"));
    return (0);
}*/	
