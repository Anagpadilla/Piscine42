/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:18:08 by anagarc4          #+#    #+#             */
/*   Updated: 2023/02/19 11:21:44 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	result;

	result = 1;
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (result);
}
/*
#include <stdio.h>
int main (void)
{
	printf("-4: %d\n", ft_iterative_factorial(-4));
	printf("0: %d\n", ft_iterative_factorial(0));
	printf("8: %d\n", ft_iterative_factorial(8));
	printf("256: %d\n", ft_iterative_factorial(256));
}*/
