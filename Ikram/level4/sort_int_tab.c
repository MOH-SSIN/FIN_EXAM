void	sort_int_tab(int *tab, unsigned int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size)
	{
		if (tab[i + 1] < tab[i])
		{
			tmp = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = tmp;
            i = -1;
		}
		i++;
	}
}

#include <stdio.h>

int main()
{
    int tab[5] = {1, 4, 6, 9, 3};
    sort_int_tab(tab, 5);
    int i = 0;
    while (i < 5)
    {
       printf("%d ", tab[i]);
       i++;
    }
}