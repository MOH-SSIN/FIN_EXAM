#include <stdlib.h>
#include <unistd.h>
# define WD_NUM 1000
# define WD_LEN 1000

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

char **ft_split(char *str)
{
	int i;
	int i2;
	int i3;
	char **tab;
    i = 0;
	i2 = 0;
	tab = malloc(sizeof(char *) * WD_NUM);
	while (str[i] == 32 || str[i] == '\t')
		i++;
	while (str[i])
	{
		if (str[i] > 32)
		{
			i3 = 0;
			tab[i2] = malloc(sizeof(char) *WD_LEN);
			while (str[i] > 32 && str[i])
			{
				tab[i2][i3] = str[i];
				i3++;
				i++;
			}
			tab[i2][i3] = '\0';
			i2++;
		}
		else
			i++;
	}
	tab[i2] = 0;
	return(tab);
}

int main(int ac, char **av)
{
    char **tab;
    int i = 1;
    if (ac > 1)
    {
        tab = ft_split(av[1]);
        while (tab[i])
        {
            ft_putstr(tab[i]);
            write(1, " ", 1);
            i++;
        }
        ft_putstr(tab[0]);
    }
    write(1, "\n", 1);
}