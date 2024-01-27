/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trunnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:55:54 by trunnguy          #+#    #+#             */
/*   Updated: 2024/01/18 16:25:26 by trunnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int is_valid_base(char *base)
{
	int i;
	int dup;
	
	i = 0;
	dup = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return 0;
	while (base[i])
	{
		dup = i + 1;
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			return 0;
		while (base[dup])
		{
			if (base[i] == base[dup])
				return 0;
			dup++;
		}
		i++;
	}
	return i;
}

int	char_to_digit(char c, char *base)
{
	int i;

	i = 0;
    while (base[i]) {
        if (base[i] == c)
            return i;
        i++;
    }
    return -1;
}

int	ft_atoi_base(char *str, char *base) {
    int sign = 1;
    int nb = 0;
    int base_size;

    if (base_size == 0)
        return 0;

    while ((*str >= 9 && *str <= 13) || (*str == ' '))
        str++;

    while (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign *= -1;
        str++;
    }

    while (*str)
    {
        int digit = char_to_digit(*str, base);
        if (digit == -1)
            return 0;  // Invalid character in the string
        nb = nb * base_size + digit;
        str++;
    }

    return nb * sign;
}
#include <stdio.h>
int main(void) {
    // Test cases
    char base1[] = "0123456789";
    char base2[] = "01";
    char base3[] = "0123456789ABCDEF";
    char base4[] = "poneyvif";

    char str1[] = "123";
    char str2[] = "-1101";
    char str3[] = "1A";
    char str4[] = "poney";

    printf("%d\n", ft_atoi_base(str1, base1));  // Output: 123
    printf("%d\n", ft_atoi_base(str2, base2));  // Output: -13
    printf("%d\n", ft_atoi_base(str3, base3));  // Output: 26
    printf("%d\n", ft_atoi_base(str4, base4));  // Output: 0 (invalid character in the string)

    return 0;
}

