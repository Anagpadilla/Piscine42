/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 21:29:02 by anagarc4          #+#    #+#             */
/*   Updated: 2023/02/12 01:56:29 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;

	x = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while ((src[i] != '\0') && (i < (size -1)))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}	
	return (x);
}
/*
#include <stdio.h>

int main()
{
	char src[] = "Limon";
	char dest[] = "Naranja ";
	unsigned int n = 10;

	ft_strlcpy(dest, src, n);
	printf("%d | %s", ft_strlcpy(dest, src, n), dest);
}*/
