


int	ft_atoi(const char *str)
{
    int i;
    int result;
    int sign;

    i = 0;
    result = 0;
    sign = 1;
    while (str[i] <= 32)
        i++;
    if (str[i] == '-')
    {
        sign *= -1;
        i++;
    }
    else if  (str[i] == '+')
        i++;
    while (str[i] &&(str[i] >= '0') && str[i] <= '9')
    {
        result = result *10 + (str[i] - '0');
        i++;
    }
    return (result * sign);
}