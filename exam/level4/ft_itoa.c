#include <stdio.h>
#include <stdlib.h>

int	ft_nlen(int nbr)
{
	int	i;

	if (nbr == 0)
		return (1);
	i = 0;
	while (nbr != 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

int	ft_abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

char	*ft_itoa(int nb)
{
	char	*result;
	int		i;
	int		len;

	i = 0;
	len = ft_nlen(nb);
	if (nb < 0)
		i++;
	len = len + i;
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[0] = '-';
	result[len] = '\0';
	while ((len - 1) >= i)
	{
		result[len - 1] = ft_abs(nb % 10) + '0';
		nb /= 10;
		len--;
	}
	return (result);
}

int	main(void)
{
	char *nbr;
	nbr = ft_itoa(-2147483648);
	printf("%s", nbr);
}