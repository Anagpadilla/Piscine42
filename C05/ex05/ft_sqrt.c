/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:44:13 by anagarc4          #+#    #+#             */
/*   Updated: 2023/02/19 11:48:39 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	long	i;
	long	b;

	b = nb;
	if (b <= 0)
		return (0);
	if (b == 1)
		return (1);
	i = 2;
	if (b >= 2)
	{
		while (i * i <= b)
		{
			if (i * i == b)
				return (i);
			i++;
		}
	}
	return (0);
}
/*
#include <stdio.h>

int main (void)
{
    printf("%d\n", 2, ft_sqrt(2));
    printf("%d\n", 37485937, ft_sqrt(37485937));
}*/
