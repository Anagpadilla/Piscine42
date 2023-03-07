/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:54:34 by anagarc4          #+#    #+#             */
/*   Updated: 2023/02/12 01:52:07 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 'Z') && (str[i] < 'a'))
		{
			return (0);
		}
		else if (str[i] > 'z' | str[i] < 'A')
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
    char	letter[] = "Tutifruti";
	char	;;	ltr = letter;

	char	special[] = "12tutifruti";
	char	*pspe;
	pspe = special;

	char	space[] = " ";
	char	*psp;
	psp = space;

	printf("%s = %d\n", letter, ft_str_is_alpha(ltr));
	printf("%s = %d\n" , special, ft_str_is_alpha(pspe));
	printf("%s = %d\n" , space , ft_str_is_alpha(psp));
}*/
