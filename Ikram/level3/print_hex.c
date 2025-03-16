#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			res *= 10;
			res += str[i] - 48;
		}
		i++;
	}
	return (res);
}

void	ft_putnbr_base(int nb)
{
	if (nb > 16)
	{
		ft_putnbr_base(nb / 16);
		ft_putnbr_base(nb % 16);
	}
	else if (nb <= 9)
		ft_putchar(nb + 48);
	else if (nb >= 10)
		ft_putchar(nb + 87);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_putnbr_base(ft_atoi(av[1]));
	}
	write(1, "\n", 1);
}