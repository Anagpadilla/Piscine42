/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:41:06 by anagarc4          #+#    #+#             */
/*   Updated: 2023/02/12 01:13:17 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*#include <stdio.h>*/
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '0') | (str[i] > '9'))
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
	char	num[] = "0123456789";
	char	*pnum;
	pnum = num;

	char	special[] = "0123456H_789";
	char	*pspe;
	pspe = special;

	char	space[] = " ";
	char	*psp;
	psp = space;

	printf("%s = %d\n", num, ft_str_is_numeric(num));
	printf("%s = %d\n" , special, ft_str_is_numeric(pspe));
	printf("%s = %d\n" , space , ft_str_is_numeric(psp));
}*/
