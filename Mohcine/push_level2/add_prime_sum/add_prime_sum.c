#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *nbr)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (nbr[i])
	{
		res *= 10;
		res += nbr[i] - '0';
		i++;
	}
	return (res);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb <= 9)
		ft_putchar(nb + '0');
}

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_add_sum_prime(int nb)
{
	int	i;
	int	prime_sum;

	i = 2;
	prime_sum = 0;
	if (nb <= 0)
		return (0);
	while (i <= nb)
	{
		if (ft_is_prime(i))
			prime_sum += i;
		i++;
	}
	return (prime_sum);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_putnbr(ft_add_sum_prime(ft_atoi(av[1])));
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}