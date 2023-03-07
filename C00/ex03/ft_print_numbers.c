/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 20:03:51 by anagarc4          #+#    #+#             */
/*   Updated: 2023/02/04 20:04:04 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		i;
	char	c;

	i = '0';
	while (i <= '9')
	{
		c = i;
		write(1, &c, 1);
		i++;
	}
}
/*int main(void)
{
	ft_print_numbers();
	return(0);
}*/
