/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:31:14 by anagarc4          #+#    #+#             */
/*   Updated: 2023/02/12 00:53:21 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main()
{
	char src[] = "Mango";
	char src1[] = "Mandarina";
	char dest[] = "Tutifri";
	char dest1[] = "Piña";

	ft_strcpy( dest, src);
	printf("%s", src);
	printf("\n%s", dest);
}*/
