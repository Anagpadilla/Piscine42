/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:10:57 by anagarc4          #+#    #+#             */
/*   Updated: 2023/02/12 15:12:50 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
/*#include	<stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 32) && (str[i] <= 126))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
	char	normal[] = "mangopiña";
	char	*pnormal;
	pnormal = normal;

	char	special[] = "\n, \t";
	char	*pspe;
	pspe = special;

	char	space[] = " ";
	char	*psp;
	psp = space;

	printf("%s = %d\n", normal, ft_str_is_printable(pnormal));
	printf("%s = %d\n" , special, ft_str_is_printable(pspe));
	printf("%s = %d\n" , space , ft_str_is_printable(psp));
}*/
