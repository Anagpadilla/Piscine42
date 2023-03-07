/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:24:45 by anagarc4          #+#    #+#             */
/*   Updated: 2023/02/06 20:48:56 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include	<stdio.h>

int main(void)
{
	int	a;
	int	b;
	int div;
	int mod;

	a = 10;
	b = 5;

	printf("a: %d, b: %d\n", a, b);

	ft_div_mod(a, b, &div, &mod);

	printf("a: %d, b: %d\n, división: %d, resto: %d\n", a, b, div, mod);
} */
