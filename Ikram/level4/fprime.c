#include <stdio.h>
#include <stdlib.h>

void	fprime(int nb)
{
	int	i;

	if (nb == 1)
	{
		printf("1");
		return ;
	}
	i = 2;
	while (nb >= i)
	{
		if (nb % i == 0)
		{
			printf("%d", i);
			if (nb != i)
				printf("*");
			nb /= i;
			i--;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		fprime(atoi(av[1]));
	printf("\n");
}