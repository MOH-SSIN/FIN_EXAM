#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i])
	{
		result *= str_base;
		if (str[i] >= '0' && str[i] <= '9')
			result += str[i] - 48;
		else if (str[i] >= 'a' && str[i] <= 'z')
			result += str[i] - 87;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			result += str[i] - 55;
		i++;
	}
	return (result * sign);
}

int	main(void)
{
	printf("%d", ft_atoi_base("-a", 16));
}