/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 21:03:37 by anagarc4          #+#    #+#             */
/*   Updated: 2023/02/11 10:38:44 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b != 0)
	{
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	}
}
/*
#include <stdio.h>

int main()
{
	int x = 8;
	int	y = 2;
	int *a = &x;
	int *b = &y;

	ft_ultimate_div_mod( a, b);

	printf("Div *a = %d\n" , *a);
	printf("Resto *b = %d\n" , *b);
}*/
