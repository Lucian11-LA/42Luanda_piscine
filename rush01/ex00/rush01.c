/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfredo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 15:02:32 by lalfredo          #+#    #+#             */
/*   Updated: 2024/06/16 04:39:42 by lalfredo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_mid_line(int i, int x)
{
	if (i == 1 || i == x)
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	ft_print_last_line(int i, int x)
{
	if (i == 1)
		ft_putchar('\\');
	else if (i == x)
		ft_putchar('/');
	else
		ft_putchar('*');
}

void	ft_print_first_line(int i, int x)
{
	if (i == 1)
		ft_putchar('/');
	else if (i == x)
		ft_putchar('\\');
	else
		ft_putchar('*');
}

void	print_lines(int x, int y, int i, int j)
{
	while (i <= x)
	{
		if (j == 1)
		{
			ft_print_first_line(i, x);
		}
		else if (j == y)
		{
			ft_print_last_line(i, x);
		}
		else
		{
			ft_print_mid_line(i, x);
		}
		i++;
	}
	ft_putchar('\n');
	j++;
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	while (j <= y)
	{
		i = 1;
		print_lines(x, y, i, j);
		j++;
	}
}
