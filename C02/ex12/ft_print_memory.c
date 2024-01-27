/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trunnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:09:36 by trunnguy          #+#    #+#             */
/*   Updated: 2024/01/23 17:50:32 by trunnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_address(int nb, char *hex)
{
	int	add[9];
	int	i;

	i = 0;
	if (nb == 0)
		write(1, "00000000", 8);
	else
	{
		while (nb)
		{
			add[i] = nb % 16;
			nb = nb / 16;
			i++;
		}
		while ((8 - i) > 0)
		{
			ft_putchar('0');
			i++;
		}
		while (i > 0)
		{
			ft_putchar(hex[add[i--]]);
		}
	}
	write(1, ": ", 2);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	char			*hex;

	i = 0;
	hex = "0123456789abcdef";
	while (i < size)
	{
		j = 0;
		ft_print_address(i, hex);
		while (j < 16 && i + j < size)
		{
			if (j % 2)
				ft_putchar(' ');
			j++;
		}
		i += 16;
	}
	return (addr);
}
