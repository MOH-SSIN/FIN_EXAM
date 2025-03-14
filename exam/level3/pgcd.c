#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_pgcd(int a, int b)
{
	int	i;
	int	gcd;

	i = 1;
	gcd = 0;
	while (i <= a && i <= b)
	{
		if ((a % i == 0) && (b % i == 0))
			gcd = i;
		i++;
	}
	printf("%d", gcd);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		ft_pgcd(atoi(av[1]), atoi(av[2]));
	printf("\n");
}