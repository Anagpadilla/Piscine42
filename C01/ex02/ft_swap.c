/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:13:11 by anagarc4          #+#    #+#             */
/*   Updated: 2023/02/08 17:21:27 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
#include <stdio.h>

int main(void)
{
	int	a;
	int	b;
	int	*ptra;
	int *ptrb;

	a = 5;
	b = 77;

	ptra = &a;
	ptrb = &b;

	ft_swap(ptra, ptrb);

	printf("a : %d, b : %d\n", a, b);
} */
