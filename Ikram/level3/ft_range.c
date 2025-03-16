#include <stdio.h>
#include <stdlib.h>

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	*ft_range(int start, int end)
{
	int	i;
	int	*tab;

	i = 0;
	tab = malloc(sizeof(int) * ft_abs(start - end) + 1);
	while (start < end)
	{
		tab[i] = start;
		start++;
		i++;
	}
	tab[i] = start;
	while (start > end)
	{
		tab[i] = start;
		start--;
		i++;
	}
	tab[i] = start;
	return (tab);
}

int	main(void)
{
	int i = 0;
	int *tab;
	tab = ft_range(-1, 3);
	while (i <= 4)
	{
		printf("%d", tab[i]);
		i++;
	}
}