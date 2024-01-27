/* ************************************************************************** */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	nb++;
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

/* ************************************************************************** */
/* ************************************************************************** */


int		ft_is_prime(int nb)
{
	int i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (nb <= 2147483647)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (2147483647);
}

/* ************************************************************************** */
/* ************************************************************************** */

int ft_sqrt(int nb) {
    if (nb < 0) {
        return 0;
    }

    if (nb == 0 || nb == 1) {
        return nb;
    }

    int low = 1;
    int high = nb;
    int result = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (mid <= nb / mid) {
            low = mid + 1;
            result = mid;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int ft_is_prime(int nb)
{
    if (nb < 2)
        return 0;
    
    for (int i = 2; i <= ft_sqrt(nb); i++)
    {
        if (nb % i == 0)
            return 0;
    }
    
    return 1;
}

int ft_find_next_prime(int nb)
{
    if (nb < 2)
        return 2;
    
    if (nb % 2 == 0)
        nb++;

    while (!ft_is_prime(nb))
        nb += 2;

    return nb;
}
