/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 19:53:01 by idahhan           #+#    #+#             */
/*   Updated: 2025/01/08 20:54:01 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
    return((octet >> 4) | (octet << 4));
}

int main ()
{
    unsigned char bit = 0;
    int i = 8;
    unsigned char res = swap_bits((unsigned char)5);
    while (i--)
    {
        bit = (res >> i & 1) + '0';
        printf("%c", bit);
    }
}