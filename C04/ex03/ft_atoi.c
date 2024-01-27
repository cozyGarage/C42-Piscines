/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trunnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:55:11 by trunnguy          #+#    #+#             */
/*   Updated: 2024/01/25 13:40:13 by trunnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	nb;

	sign = 1;
	nb = 0;
	while ((*str > 8 && *str < 14) || (*str == ' '))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		nb = nb * 10 + *str - 48;
		str++;
	}
	return (nb * sign);
}
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char *str = "   --+-+-+123d483493";
	ft_atoi(str);
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));

	return (0);
}
/* White space characters are characters used in text to separate words and
 * sentences. Examples include spaces, tabs, and line breaks. They are used
 * to format text and make it easier to read. */
