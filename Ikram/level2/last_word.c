#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

int main (int ac, char **av)
{
    if (ac == 2)
    {
        int i = ft_strlen(av[1]) - 1;
        while (i >= 0 && (av[1][i] == 32 || av[1][i] == '\t'))
            i--;
        int end = i;
        while(i >= 0 && av[1][i] != 32 && av[1][i] != '\t')
            i--;
        int j = i + 1;
        while (j <= end)
        {
            write(1, &av[1][j], 1);
            j++;
        }
    }
    write(1, "\n", 1);
}