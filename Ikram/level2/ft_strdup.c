#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    int i = 0;
    int len = ft_strlen(src);
    char *copy;

    copy = malloc((len + 1) * sizeof(char));
    if (!copy)
        return (NULL);
    while(src[i])
    {
        copy[i] = src[i];
        i++;
    }
    copy[i] = '\0';

    return (copy);
}

int main()
{
    printf("%s\n", ft_strdup("ikram"));
}