/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validar.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agfranci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 11:15:47 by agfranci          #+#    #+#             */
/*   Updated: 2024/06/23 11:15:49 by agfranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	row_leftright(int check, int *pos, int box[4][4], int arg[4][4])
{
	int	i;
	int	maior;
	int	c;

	i = -1;
	maior = 0;
	c = 0;
	while (++i < 4)
	{
		if (pos[2] == box[pos[0]][i] && i != pos[1])
			return (1);
		if (box[pos[0]][i] > maior)
		{
			maior = box[pos[0]][i];
			c++;
		}
		if (box[pos[0]][i] == -1)
			check = 1;
	}
	if (c > arg[2][pos[0]] && check == 0)
		return (1);
	if (check == 0 && c != arg[2][pos[0]])
		return (1);
	return (0);
}

int	col_cimabaixo(int check, int *pos, int box[4][4], int arg[4][4])
{
	int	i;
	int	maior;
	int	c;

	c = 0;
	i = -1;
	maior = 0;
	while (++i < 4)
	{
		if (pos[2] == box[i][pos[1]] && i != pos[0])
			return (1);
		if (box[i][pos[1]] > maior)
		{
			maior = box[i][pos[1]];
			c++;
		}
		if (box[i][pos[1]] == -1)
			check = 1;
	}
	if (c > arg[0][pos[1]] && check == 0)
		return (1);
	if (check == 0 && c != arg[0][pos[1]])
		return (1);
	return (0);
}

int	rightleft(int check, int *pos, int box[4][4], int arg[4][4])
{
	int	c;
	int	maior;
	int	i;

	c = 0;
	i = 4;
	maior = 0;
	while (--i > -1)
	{
		if (box[pos[0]][i] > maior)
		{
			maior = box[pos[0]][i];
			c++;
		}
		if (box[pos[0]][i] == -1)
			check = 1;
	}
	if (c > arg[3][pos[0]] && check == 0)
		return (1);
	if (check == 0 && c != arg[3][pos[0]])
		return (1);
	return (0);
}

int	baixocima(int check, int *pos, int box[4][4], int arg[4][4])
{
	int	c;
	int	maior;
	int	i;

	c = 0;
	maior = 0;
	i = 4;
	while (--i > -1)
	{
		if (box[i][pos[1]] > maior)
		{
			maior = box[i][pos[1]];
			c++;
		}
		if (box[i][pos[1]] == -1)
			check = 1;
	}
	if (c > arg[1][pos[1]] && check == 0)
		return (1);
	if (check == 0 && c != arg[1][pos[1]])
		return (1);
	return (0);
}
