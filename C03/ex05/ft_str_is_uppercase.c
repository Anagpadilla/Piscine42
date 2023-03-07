/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:01:02 by anagarc4          #+#    #+#             */
/*   Updated: 2023/02/11 14:30:59 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A') | (str[i] > 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main()
{
	char	upper[] = "MARCOPOLO";
	char	*pupper;
	pupper = upper;

	char	special[] = "MARCO&POLO";
	char	*pspe;
	pspe = special;

	char	space[] = " ";
	char	*psp;
	psp = space;

	printf("%s = %d\n", upper, ft_str_is_uppercase(pupper));
	printf("%s = %d\n" , special, ft_str_is_uppercase(pspe));
	printf("%s = %d\n" , space , ft_str_is_uppercase(psp));
}*/
