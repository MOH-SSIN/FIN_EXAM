#include <stdio.h>

int	max(int* tab, unsigned int len)
{
    int i = 0;
    int max = tab[0];
    if (len > 0)
    {
        while (i < len)
        {
            if (tab[i] >= max)
                max = tab[i];
            i++;
        }
        return (max);
    }
    return (0);
}

int main ()
{
    int tab[8] = {1, 5, 6, 7, 2, 1, 9, 28};
    printf("%d\n", max(tab, 0));
    return (0);
}