#include <stdio.h>

void	ft_swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

int main ()
{
    int a = 5;
    int b = 10;
    ft_swap(&a, &b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}