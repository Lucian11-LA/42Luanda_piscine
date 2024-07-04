/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   box.c                                            :+:         :+:   :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agfranci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 11:15:15 by agfranci          #+#    #+#             */
/*   Updated: 2024/06/23 11:15:18 by agfranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	mostrar(int arg[4][4]);

void	inc_asign(int box[4][4], int constant, int roworcolumn, int inc_or_dec)
{
	int	z;

	if (inc_or_dec == 0)
	{
		z = -1;
		while (++z < 4)
		{
			if (roworcolumn == 0)
				box[constant][z] = z + 1;
			else
				box[z][constant] = z + 1;
		}
	}
	else
	{
		z = 4;
		while (--z > -1)
		{
			if (roworcolumn == 0)
				box[constant][z] = 4 - z;
			else
				box[z][constant] = 4 - z;
		}
	}
}

void	atribuir_um(int box[4][4], int i, int j)
{
	if (i == 0)
		box[0][j] = 4;
	else if (i == 1)
		box[3][j] = 4;
	else if (i == 2)
		box[j][0] = 4;
	else if (i == 3)
		box[j][3] = 4;
}

void	atribuir(int box[4][4], int *i, int *j, int arg[4][4])
{
	int	z;

	z = -1;
	if (arg[*i][*j] == 1)
		atribuir_um(box, *i, *j);
	else if (*i == 0)
		inc_asign(box, *j, 1, 0);
	else if (*i == 1)
		inc_asign(box, *j, 1, 1);
	else if (*i == 2)
		inc_asign(box, *j, 0, 0);
	else
		inc_asign(box, *j, 0, 1);
}

void	iniciar_box(int arg[4][4], int box[4][4])
{
	int	i;
	int	j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			if (arg[i][j] == 4 || arg[i][j] == 1)
			{
				atribuir(box, &i, &j, arg);
			}
		}
	}
}
