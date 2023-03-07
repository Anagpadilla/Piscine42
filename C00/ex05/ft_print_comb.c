/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 20:05:32 by anagarc4          #+#    #+#             */
/*   Updated: 2023/02/04 20:05:39 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	 <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	dig [3];

	dig[0] = '0';
	while (dig[0] <= '9')
	{
		dig[1] = dig[0] + 1;
		while (dig[1] <= '9')
		{
			dig[2] = dig[1] + 1;
			while (dig[2] <= '9')
			{
				ft_putchar(dig[0]);
				ft_putchar(dig[1]);
				ft_putchar(dig[2]);
				if (dig[0] != '7' || dig[1] != '8' | dig[2] != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				dig[2]++;
			}
			dig[1]++;
		}
		dig[0]++;
	}
}
/*int main(void)
{
	ft_print_comb();
	return(0);
}
*/
