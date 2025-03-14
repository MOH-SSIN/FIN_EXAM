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

int	main(int ac, char **av)
{
	int i = 1;
	if (ac == 2)
	{
		int nb = ft_atoi(av[1]);
		while (i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(nb);
			write(1, " = ", 3);
			ft_putnbr(nb * i);
			ft_putchar('\n');
			i++;
		}
	}
	else
		write(1, "\n", 1);
}