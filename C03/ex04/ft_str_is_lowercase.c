/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:06:31 by anagarc4          #+#    #+#             */
/*   Updated: 2023/02/11 13:36:39 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a') | (str[i] > 'z'))
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
	char	lower[] = "tutifruti";
	char	*plower;
	plower = lower;

	char	special[] = "tuti5fruti";
	char	*pspe;
	pspe = special;

	char	space[] = " ";
	char	*psp;
	psp = space;

	printf("%s = %d\n", lower, ft_str_is_lowercase(plower));
	printf("%s = %d\n" , special, ft_str_is_lowercase(pspe));
	printf("%s = %d\n" , space , ft_str_is_lowercase(psp));
}*/
