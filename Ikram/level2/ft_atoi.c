#include <stdio.h>

int	ft_atoi(const char *str)
{
    int i = 0;
    int result = 0;
    int sign = 1;

    while (str[i] <= 32)
        i++;
    if (str[i] == '+')
        i++;
    else if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    while(str[i] && str[i] >= '0' && str[i]<= '9')
    {
        result *=10;
        result += str[i] - '0';
        i++;
    }
    return(result * sign);
}

int main()
{
    printf("%d\n", ft_atoi("+23456209"));
}