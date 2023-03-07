/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:58:03 by anagarc4          #+#    #+#             */
/*   Updated: 2023/02/18 18:31:57 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		res *= nb;
		power--;
	}
	return (res);
}
/*
#include <stdio.h>

int main (void)
{

	printf("%i\n", ft_iterative_power(3, 4));
	printf("%i\n", ft_iterative_power(2, 5));
	printf("%i\n", ft_iterative_power(2, 8));
}*/
