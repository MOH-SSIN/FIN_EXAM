#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int result = 0;
    if (ac == 4)
    {
        int a = atoi(av[1]);
        int b = atoi(av[3]);
        char op = av[2][0];
        if (op == '+')
            result = a + b;
        else if (op == '-')
            result = a - b;
        else if (op == '*')
            result = a * b;
        else if (op == '/')
            result = a / b;
        else if (op == '%')
            result = a % b;

        printf("%d\n", result);
    }
    else
        write(1, "\n", 1);
}