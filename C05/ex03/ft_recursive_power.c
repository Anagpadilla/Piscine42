/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:33:02 by anagarc4          #+#    #+#             */
/*   Updated: 2023/02/20 17:55:57 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power > 1)
		return (nb * ft_recursive_power(nb, power -1));
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (result);
}
/*
#include <stdio.h>

int main (void)
{
    printf("2 ^ 4 = %d\n", ft_recursive_power(2, 4));
    printf("6 ^ 2 = %d\n", ft_recursive_power(6, 2));
    printf("-2 ^ 2 = %d\n", ft_recursive_power(-2, 2));
}*/
