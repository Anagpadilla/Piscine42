/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:20:43 by anagarc4          #+#    #+#             */
/*   Updated: 2023/02/15 19:01:35 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_ver_bas(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if ((base[i] == '+') || (base[i] == '-'))
			return (0);
		else if (base[i] == (base[i + 1]))
			return (0);
		else if ((base[i] == ' ') || (base[i] == '\n') || (base[i] == '\t'))
			return (0);
		else if ((base[i] == '\v' ) || (base[i] == '\f') || (base[i] == '\r'))
			return (0);
		else if (base[i] < 32)
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

int	ft_mult_nbr(char d, char *base, int mult, int nbr)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (d == base[i])
			return (nbr + (mult * i));
		i++;
	}
	return (nbr);
}

int	ft_isbase(char n, char *base)
{
	int	i;

	i = 0;
	if ((n == '+') || (n == '-'))
		return (1);
	else if ((n == ' ') || (n == '\n') || (n == '\t'))
		return (1);
	else if ((n == '\v') || (n == '\f') || (n == '\r'))
		return (1);
	else if (base[i] < 32)
		return (1);
	while (base[i] != '\0')
	{
		if (base[i] == n)
			return (2);
		i++;
	}
	return (0);
}

int	ft_atoi_simpl(char *str, char *base, int size, int start)
{
	int	i;
	int	s;
	int	res;
	int	mult;

	i = (start -1);
	s = 1;
	res = 0;
	mult = 1;
	while (i >= 0)
	{
		if (str[i] == '-')
			s *= (-1);
		if (ft_isbase(str[i], base) == 2)
		{
			res = ft_mult_nbr(str[i], base, mult, res);
			mult *= size;
		}
		i--;
	}
	return (res * s);
}

int	ft_atoi_base(char *str, char *base)
{
	int	size;
	int	i;

	size = 0;
	i = 0;
	if (ft_ver_bas(base) == 0)
		return (0);
	while (base[size] != '\0')
		size++;
	while ((str[i] == '+') || (str[i] == '-'))
		i++;
	while ((str[i] == ' ') || (str[i] == '\n') || (str[i] == '\t'))
		i++;
	while ((str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
		i++;
	return (ft_atoi_simpl(str, base, size, i));
}
/*
#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	printf("%d\n", ft_atoi_base("	-+-042 + 893 --", "0123456789"));
}*/
