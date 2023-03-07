/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:34:31 by anagarc4          #+#    #+#             */
/*   Updated: 2023/02/10 15:26:32 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = swap;
		i++;
	}
}
/*
#include <stdio.h>
int main(void)
{
	int tab [6] = { 0, 1, 2, 3, 4, 5};
	int size = 5;

    ft_rev_int_tab(tab, size);
    
    printf("%d, %d, %d, %d", tab[0], tab[1],tab[2], tab[3]);
    return(0);
}*/
