#include <stdio.h>
#include <stdlib.h>
size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;
    int found;

    while(s[i])
    {
        size_t j = 0;
        while(accept[j])
        {
            found = 0;
            if (s[i] == accept[j])
            {
                found = 1;
                break ;
            }
            j++;
        }
        if (found == 0)
            return (i);
        i++;
    }
    return (i);
}

int main ()
{
    printf("%zu\n", ft_strspn("fghjnefsfgh123", "abcd"));
}