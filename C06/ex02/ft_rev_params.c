/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:38:35 by anagarc4          #+#    #+#             */
/*   Updated: 2023/02/17 15:03:29 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int	main(int argc, char **argv)
{
	int	j;
	int	i;

	j = argc - 1;
	if (argc > 1)
	{
		while (j > 0)
		{
			i = 0;
			while (argv[j][i] != '\0')
			{
				write(1, &argv[j][i], 1);
				i++;
			}
			write (1, "\n", 1);
			j--;
		}
	}
	return (0);
}
