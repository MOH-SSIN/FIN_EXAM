/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 19:59:33 by idahhan           #+#    #+#             */
/*   Updated: 2025/01/02 21:06:16 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	n;

	if ((a == 0) || (b == 0))
		return (0);
	if (a > b)
		n = a;
	else
		n = b;
	while (1)
	{
		if ((n % a == 0) && (n % b == 0))
			return (n);
		++n;
	}
}
int	main(void)
{
	printf("%d", lcm(12, 22));
}