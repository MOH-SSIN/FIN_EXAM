/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 19:32:22 by idahhan           #+#    #+#             */
/*   Updated: 2025/01/02 19:32:25 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		int i = 0;
		int j = 0;
		int wdlen = 0;
		while (av[1][i])
		{
			while (av[2][j])
			{
				if (av[1][i] == av[2][j])
				{
					wdlen++;
					break ;
				}
				j++;
			}
			i++;
		}
		if (wdlen == ft_strlen(av[1]))
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
}