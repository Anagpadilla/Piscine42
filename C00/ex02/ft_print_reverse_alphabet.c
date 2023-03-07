/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 20:03:05 by anagarc4          #+#    #+#             */
/*   Updated: 2023/02/04 20:03:13 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int		i;
	char	c;

	i = 'z';
	while (i >= 'a')
	{
	c = i;
		write(1, &c, 1);
		i--;
	}
}
/*int main(void)
{
	ft_print_reverse_alphabet();
	return(0);
}*/
