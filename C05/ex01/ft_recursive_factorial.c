/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:55:55 by anagarc4          #+#    #+#             */
/*   Updated: 2023/02/18 17:56:43 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>

int main (void)
{
	printf("-4: %d\n", ft_recursive_factorial(4));
	printf("0: %d\n", ft_recursive_factorial(0));
	printf("8: %d\n", ft_recursive_factorial(8));
	printf("256: %d\n", ft_recursive_factorial(256));
	printf("2: %d\n", ft_recursive_factorial(2));
}*/
