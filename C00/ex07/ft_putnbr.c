/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trunnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 20:49:15 by trunnguy          #+#    #+#             */
/*   Updated: 2024/01/13 17:27:37 by trunnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int num)
{
	if (num == 0)
	{
		ft_putchar('0');
	}
	else if (num == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else
	{
		if (num < 0)
		{
			ft_putchar('-');
			num = -num;
		}
		if (num > 9)
		{
			ft_putnbr(num / 10);
		}
		ft_putchar(num % 10 + '0');
	}
}

/*#include <stdio.h>
int main(void)
{
	ft_putnbr(10);
	printf("\n");
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(100);
	printf("\n");
	ft_putnbr(-100);
	printf("\n");
	ft_putnbr(-1);
	printf("\n");
	ft_putnbr(2147483647);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
}*/
