/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 19:55:34 by anagarc4          #+#    #+#             */
/*   Updated: 2023/02/11 21:24:38 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

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

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	word;

	i = 0;
	word = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			if (word == 1)
				str[i] = str[i] - 32;
			word = 0;
		}
		else if ((str[i] >= '0') && (str[i] <= '9'))
			word = 0;
		else
			word = 1;
	i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main()
{
    char str[] = "tomate, lechugay pepinillos";
	char str2[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s\n", ft_strcapitalize(str));
	printf("%s\n", ft_strcapitalize(str2));
}*/
