/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:33:23 by anagarc4          #+#    #+#             */
/*   Updated: 2023/02/11 17:37:45 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
/*#include	<stdio.h>*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
int main()
{
	char	string[] = "AGUACATE";

	printf("%s", ft_strlowcase(string));
}*/
