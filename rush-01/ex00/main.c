/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agfranci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 11:15:25 by agfranci          #+#    #+#             */
/*   Updated: 2024/06/23 11:15:26 by agfranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	resolver(int arr[4][4]);

void	iniciar(char *str, int *pos, int arg[4][4])
{
	if (pos[1] == 4)
	{
		pos[1] = 0;
		pos[2]++;
	}
	arg[pos[2]][pos[1]] = str[pos[0]] - 48;
	pos[1]++;
	pos[0]++;
}

int	entrar_arr(char *argv, int *pos, int arg[4][4])
{
	while (argv[pos[0]] != '\0')
	{
		if (argv[pos[0]] >= '1' && argv[pos[0]] <= '4')
			iniciar(argv, pos, arg);
		else if (argv[pos[0]] == ' ')
			++pos[0];
		else
		{
			write(1, "Erro", 5);
			return (1);
		}
	}
	if (pos[0] >= 32)
	{
		write(1, "Erro", 5);
		return (1);
	}
	return (0);
}

void	mostrar(int arg[4][4])
{
	int		i;
	int		j;
	char	ans;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 3)
		{
			ans = arg[i][j] + 48;
			write(1, &ans, 1);
			write(1, " ", 1);
		}
		ans = arg[i][j] + 48;
		write(1, &ans, 1);
		write(1, "\n", 1);
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	arg[4][4];
	int	pos[3];

	if (argc == 2)
	{
		i = -1;
		while (i++ < 3)
			pos[i] = 0;
		arg[3][3] = -1;
		if (entrar_arr(argv[1], pos, arg))
			return (0);
		if (arg[3][3] == -1)
		{
			write(1, "Erro", 5);
			return (0);
		}
		resolver(arg);
	}
	else
		write(1, "Erro", 5);
	return (0);
}
