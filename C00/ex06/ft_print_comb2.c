/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trunnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 19:18:12 by trunnguy          #+#    #+#             */
/*   Updated: 2024/01/13 15:20:48 by trunnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printchar(char c)
{
	write(1, &c, 1);
}

void	printnum(int a, int b)
{
	printchar(48 + a / 10);
	printchar(48 + a % 10);
	printchar(' ');
	printchar(48 + b / 10);
	printchar(48 + b % 10);
	if (!(a == 98 && b == 99))
	{
		write(1, &", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			printnum(a, b);
			b++;
		}
		a++;
	}
}

/*int main ()
{
	ft_print_comb2();
	return (0);
}*/
