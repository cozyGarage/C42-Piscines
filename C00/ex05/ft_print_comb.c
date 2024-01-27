/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trunnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:49:36 by trunnguy          #+#    #+#             */
/*   Updated: 2024/01/13 11:48:26 by trunnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printline(char x)
{
	write(1, &x, 1);
}

void	print_allnum(char a, char b, char c)
{
	printline(a + '0');
	printline(b + '0');
	printline(c + '0');
	if (!(a == 7 && b == 8 && c == 9))
	{
		write(1, &", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				print_allnum(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

/*int main(void)
{
	ft_print_comb();
	return (0);
}*/
