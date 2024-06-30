/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dic.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfredo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 13:57:07 by lalfredo          #+#    #+#             */
/*   Updated: 2024/06/30 13:57:11 by lalfredo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	ft_checkdic(char *dic, char *n, int sf, char *spc)
{
	int		res;

	if (sf == 0 && *n == '1' && ft_strl(n) > 1 && ft_iszeroes(n) == 1)
	{
		if ((ft_tp(n) == 0 && ft_tn(n) > 0)
			|| (ft_tp(n) == 2 && ft_tn(n) == 0))
		{
			res = ft_get_word(dic, "1");
			if (res < 0)
				return (res);
			if (res > 0)
				ft_putstr(DELIM);
		}
	}
	res = ft_get_word(dic, n);
	if (res > 0 && *spc != 0)
		ft_putstr(spc);
	return (res);
}

int	ft_say1(char *dic, char *nbr)
{
	char	*tri;
	int		res;

	tri = ft_slice_tri(nbr);
	res = ft_say_tri(dic, tri, (ft_tn(nbr) == 0));
	free(tri);
	return (res);
}

int	ft_say(char *dic, char *nbr)
{
	int		res;

	if (*nbr == 0)
		return (0);
	while (*nbr == '0' && ft_strl(nbr) > 1)
		nbr++;
	if (ft_tn(nbr) > 0)
	{
		res = ft_checkdic(dic, nbr, 0, "");
		if (res != 0)
			return (res);
		res = ft_check_z(dic, nbr);
		if (res > 0)
			nbr = nbr + res;
	}
	res = ft_say1(dic, nbr);
	if (res < 0)
		return (res);
	nbr = nbr + ft_tp(nbr);
	res = ft_add_suffix(dic, nbr);
	if (res < 0)
		return (res);
	nbr = nbr + 1 + res;
	ft_say(dic, nbr);
	return (0);
}

int	ft_say_arg(char *dic, char *nbr)
{
	int		res;

	if (dic == 0)
		return (-1);
	if (*dic == 0)
		return (-1);
	if (ft_isnumber(nbr) == 0)
	{
		ft_puterror("Error\n");
		return (-1);
	}
	res = ft_say(dic, nbr);
	if (res == -2)
	{
		ft_puterror("Dict Error\n");
		return (-2);
	}
	if (res < 0)
		return (-1);
	ft_putchar('\n');
	return (0);
}

int	ft_say_input(char *dic)
{
	int		res;
	int		n;
	char	buff[BUFFSIZE];

	res = 0;
	n = read(0, &buff, BUFFSIZE);
	while (n > 0)
	{
		buff[n - 1] = 0;
		res = ft_say_arg(dic, buff);
		if (res == -2)
			return (res);
	}
	return (0);
}
