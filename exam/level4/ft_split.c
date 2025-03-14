#include <stdlib.h>
char    **ft_split(char *str)
{
    char **result;
    int i;
    int i2;
    int i3;

    result = malloc(sizeof(char *) * 1000);
    if (!result)
        return (NULL);
    i = 0;
    i2 = 0;
    while(str[i] && str[i] <= 32)
        i++;
    while(str[i])
    {
        if (str[i] > 32)
        {
            result[i2] = malloc(sizeof(char) * 1000);
            i3 = 0;
            while(str[i] > 32 && str[i])
            {
                result[i2][i3] = str[i];
                i++;
                i3++;
            }
            result[i2][i3] = '\0';
            i2++;
        }
        else
            i++;
    }
    result[i2] = 0;
    return(result);
}

#include <stdio.h>
int main ()
{
    char **tab = ft_split("");
    int i = 0;
    while(tab[i])
    {
        printf("%s\n", tab[i]);
        i++;
    }
    printf("%s", tab[i]);
}