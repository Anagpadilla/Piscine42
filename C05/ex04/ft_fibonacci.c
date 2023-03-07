/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 01:34:46 by anagarc4          #+#    #+#             */
/*   Updated: 2023/02/19 11:29:01 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index -1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>

int main (void)
{
    printf("%d\n", ft_fibonacci(3));
    printf("%d\n", ft_fibonacci(4));
}*/
