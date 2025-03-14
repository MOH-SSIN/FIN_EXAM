#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strrev(char *str)
{
    int i = 0;
    char tmp;
    int len = ft_strlen(str);
    while (i < len / 2)
    {
        tmp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = tmp;
        i++;
    }
    return (str);
}

int main ()
{
    char str[20] = "hello gils123";
    printf("%s\n", ft_strrev(str));
}