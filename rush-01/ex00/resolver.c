/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolver.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agfranci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 11:15:36 by agfranci          #+#    #+#             */
/*   Updated: 2024/06/23 11:15:38 by agfranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	resolver(int arg[4][4]);
void	mostrar(int arg[4][4]);
void	iniciar_box(int arg[4][4], int grid[4][4]);
int		recursao(int box[4][4], int arg[4][4], int r, int c);
int		row_leftright(int check, int *pos, int box[4][4], int arg[4][4]);
int		col_cimabaixo(int check, int *pos, int box[4][4], int arg[4][4]);
int		rightleft(int check, int *pos, int box[4][4], int arg[4][4]);
int		baixocima(int check, int *pos, int box[4][4], int arg[4][4]);

int	e_valido(int box[4][4], int arg[4][4], int *pos)
{
	box[pos[0]][pos[1]] = pos[2];
	if (row_leftright(0, pos, box, arg) == 1)
		return (1);
	if (col_cimabaixo(0, pos, box, arg) == 1)
		return (1);
	if (rightleft(0, pos, box, arg) == 1)
		return (1);
	if (baixocima(0, pos, box, arg) == 1)
		return (1);
	return (0);
}

int	condicao(int arg[4][4], int r, int c)
{
	if ((r == 0) && (arg[0][c] == 2 || arg[0][c] == 3))
		return (1);
	if ((r == 3) && (arg[1][c] == 2 || arg[1][c] == 3))
		return (1);
	if ((c == 0) && (arg[2][r] == 2 || arg[2][r] == 3))
		return (1);
	if ((c == 3) && (arg[3][r] == 2 || arg[3][r] == 3))
		return (1);
	return (0);
}

int	loop_condicao(int *i, int *pos, int arg[4][4], int box[4][4])
{
	int	r;
	int	c;

	r = pos[0];
	c = pos[1];
	while (++*i < 5)
	{
		if (*i == 4 && (pos[0] == 0 || pos[1] == 0 \
			|| pos[0] == 3 || pos[1] == 3))
		{
			if (condicao(arg, r, c) == 1)
				continue ;
		}
		pos[2] = *i;
		if (e_valido(box, arg, pos) == 0)
		{
			if (recursao(box, arg, r, c + 1) == 0)
				return (0);
			box[r][c] = -1;
		}
		else
			box[r][c] = -1;
	}
	return (1);
}

int	recursao(int box[4][4], int arg[4][4], int r, int c)
{
	int	i;
	int	pos[3];

	i = 0;
	pos[0] = r;
	pos[1] = c;
	if (r == 4)
		return (0);
	else if (c == 4)
		return (recursao(box, arg, r + 1, 0));
	else if (box[r][c] != -1)
		return (recursao(box, arg, r, c + 1));
	else
	{
		if (loop_condicao(&i, pos, arg, box) == 0)
			return (0);
		else
			return (1);
	}
}

void	resolver(int arg[4][4])
{
	int	box[4][4];
	int	i;
	int	j;
	int	ans;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
			box[i][j] = -1;
	}
	iniciar_box(arg, box);
	ans = recursao(box, arg, 0, 0);
	if (ans == 0)
		mostrar(box);
	else
		write(1, "Error", 5);
}

// int main()
// {
//     int arg[4][4] = {{2,2,1,4},{3,2,3,1},{2,1,2,3},{2,3,2,1}};
//     int box[4][4] = {{-1,-1,4,1}, {4, -1,-1, 2}, {-1,-1,-1,3}, {-1,-1,-1,4}};
//     recursao(box, arg, 0, 0);
//     print_criteria(box);
// }
