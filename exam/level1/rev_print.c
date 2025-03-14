/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 18:21:18 by idahhan           #+#    #+#             */
/*   Updated: 2025/01/02 18:21:21 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return (i);
}

int main (int ac, char **av)
{
    if (ac == 2)
    {
        int i = ft_strlen(av[1]) - 1;
        while (i >= 0)
        {
            write(1, &av[1][i], 1);
            i--;
        }
    }
    write(1, "\n",1);
}