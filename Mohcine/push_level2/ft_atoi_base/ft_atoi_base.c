#include "stdio.h"
#include "stdlib.h"

int	ft_is_valid_base(const char *base, int base_size)
{
	for (int i = 0; i < base_size; i++)
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		for (int j = i + 1; j < base_size; j++)
			if (base[i] == base[j])
				return (0);
	}
	return (1);
}

int	ft_char_to_value(char c, int str_base)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	if (!str || str_base < 2 || str_base > 16)
		return (0);
	
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	
	int sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	
	int result = 0;
	int value;
	while ((value = ft_char_to_value(*str, str_base)) >= 0 && value < str_base)
	{
		result = result * str_base + value;
		str++;
	}
	return (result * sign);
}

// int main()
// {
//     printf("%d\n",ft_atoi_base("-1844724512$", 10));
//     return (0);
// }