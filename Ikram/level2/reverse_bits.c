#include <unistd.h>
#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
    int i = 8;
    unsigned char res = 0;
    while (i--)
    {
        res = (res << 1) | (octet & 1);
        octet = octet >> 1;
    }
    return (res);
}

int main ()
{
    unsigned char bit = 0;
    unsigned char res = reverse_bits((unsigned char)5);
    int i = 8;
    while (i--)
    {
        bit = (res >> i & 1) + '0';
        printf("%c", bit);
    }
}