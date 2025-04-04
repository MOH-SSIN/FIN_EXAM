// ikram ddahhan
// amd
// i = 3;
// j = 0;
// => i = 1

#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t i = 0;

    while(s[i])
    {
        size_t j = 0;
        while(reject[j])
        {
            if (s[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}

int main ()
{
    printf("%zu\n", ft_strcspn("ikram", "r"));
}