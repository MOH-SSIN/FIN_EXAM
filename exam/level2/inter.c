/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 18:45:16 by idahhan           #+#    #+#             */
/*   Updated: 2025/01/02 18:45:20 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check_doubles(char *str, char c, int pos)
{
    int i = 0;
    while(i < pos)
    {
        if(str[i] == c)
            return (0);
        i++;
    }
    return (1);
}

int main (int ac, char **av)
{
    if (ac == 3)
    {
        int i = 0;
        while(av[1][i])
        {
            int j = 0;
            while(av[2][j])
            {
                if (av[2][j] == av[1][i])
                {
                    if (check_doubles(av[1], av[1][i], i))
                    {
                        write(1, &av[1][i], 1);
                        break ;
                    }
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}