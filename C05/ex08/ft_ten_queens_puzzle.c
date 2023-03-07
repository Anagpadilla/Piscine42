/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:33:43 by anagarc4          #+#    #+#             */
/*   Updated: 2023/02/20 19:16:31 by anagarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

#define BOARD_SIZE 10

int	g_board[BOARD_SIZE][BOARD_SIZE] = {0};

void	print_board(void)
{
	int i;
	int j;
    char c;

	i = 0;
	while (i < BOARD_SIZE)
	{
		j = 0;
		while (j < BOARD_SIZE)
		{
			if (g_board[i][j] == 1)
				c = '0' + j;
			else
				c = '.';
			write(1, &c, 1);
			j++;
		}
  		i++;
	}
	write(1, "\n", 1);
}

int		is_valid(int row, int col)
{
	int	i;
	int	j;

	i = 0;
	while (i < col)
	{
		if (g_board[row][i] == 1)
			return (0);
		i++;
	}

	i = row;
	j = col;
	while (i >= 0 && j >= 0)
	{
		if (g_board[i][j] == 1)
			return (0);
		i--;
		j--;
	}

	i = row;
	j = col;
	while (i < BOARD_SIZE && j >= 0)
    {
	if (g_board[i][j] == 1)
		return (0);
		i++;
		j--;
    }
	return (1);
}

int	solve(int col, int count)
{
	int row;

	if (col == BOARD_SIZE)
	{	
		count++;
		print_board();
		return (count);
	}

	row = 0;
	while (row < BOARD_SIZE)
    {
		if (is_valid(row, col))
        {
			g_board[row][col] = 1;
			count = solve(col + 1, count);
			g_board[row][col] = 0;
		}
		row++;
	}

	return (count);
}

int	ft_ten_queens_puzzle(void)
{
   	return (solve(0, 0));
}*/
