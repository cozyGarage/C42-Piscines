/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trunnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:55:35 by trunnguy          #+#    #+#             */
/*   Updated: 2024/01/18 16:00:08 by trunnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check_base(char *base)
{
	int	i;
	int	dup;

	i = 0;
	dup = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		dup = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[dup])
		{
			if (base[i] == base[dup])
				return (0);
			dup++;
		}
		i++;
	}
	return (i);
}

void	ft_printnbr_base(int nbr, char *base, int base_type)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= base_type)
		ft_printnbr_base(nbr / base_type, base, base_type);
	ft_putchar(base[nbr % base_type]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_type;

	base_type = ft_check_base(base);
	if (base_type)
	{
		if (nbr == 0)
			ft_putchar(base[0]);
		else
			ft_printnbr_base(nbr, base, base_type);
	}
}
/*
int main(void)
{
    char base1[] = "0123456789";
    char base2[] = "01";
    char base3[] = "0123456789ABCDEF";
    char base4[] = "poneyvif";

    int number1 = 123;
    int number2 = -456;
    int number3 = 1564653866;
    int number4 = 75;  // 75 in base 10 is 113 in base "poneyvif"

    ft_putnbr_base(number1, base1);
    ft_putchar('\n');

    ft_putnbr_base(number2, base2);
    ft_putchar('\n');

    ft_putnbr_base(number3, base3);
    ft_putchar('\n');

    ft_putnbr_base(number4, base4);
    ft_putchar('\n');

    return 0;
}*/
