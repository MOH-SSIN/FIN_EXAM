#include "unistd.h"
#include "string.h"
#include "stdio.h"

char    *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = -1;
    while (s2[++i])
        s1[i] = s2[i];
    s1[i] = '\0';
    return (s1);
}