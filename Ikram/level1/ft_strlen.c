/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 18:25:01 by idahhan           #+#    #+#             */
/*   Updated: 2025/01/02 18:25:03 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return (i);
}

int main ()
{
    char str[6] = "ikram";
    printf("%d\n", ft_strlen(str));
}