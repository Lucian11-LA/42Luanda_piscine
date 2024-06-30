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

int	ft_check_zp1(char *dic, char *nbr, int last)
{
	char	*zs;
	int		res;

	(void)last;
	if (ft_tp(nbr) != 1)
		return (0);
	zs = ft_endzero(nbr, 1);
	res = ft_checkdic(dic, zs, 1, tern1(zs[1], nbr[1]));
	free(zs);
	return (res);
}

int	ft_check_zp2u(char *dic, char *nbr, int last)
{
	char	*zs;
	int		res;

	res = 0;
	if (ft_tp(nbr) != 2)
		return (0);
	zs = ft_endzero(nbr, 2);
	res = ft_checkdic(dic, zs, 1, tern2(ft_tp(nbr), 1));
	free(zs);
	if (res > 0)
	{
		if (ft_countzeros(nbr) < 2)
			tern3(last);
		res = 2;
	}
	return (res);
}

int	ft_check_zp2e(char *dic, char *nbr, int last)
{
	char	*zs;
	int		res;

	zs = ft_getdigit(*nbr);
	res = ft_checkdic(dic, zs, 1, DELIM);
	free(zs);
	if (res < 0)
		return (res);
	res = ft_checkdic(dic, "100", 1, "");
	if (res > 0)
	{
		if (ft_countzeros(nbr) < 2)
			tern3(last);
	}
	return (res);
}

int	ft_check_zt(char *dic, char *nbr, int last)
{
	int		res;

	res = ft_check_zp1(dic, nbr, last);
	if (res != 0)
		return (res);
	if (*nbr != '1')
	{
		res = ft_check_zp2u(dic, nbr, last);
		if (res != 0)
			return (res);
	}
	res = ft_check_zp2e(dic, nbr, last);
	return (res);
}

int	ft_say_tri(char *dic, char *nbr, int last)
{
	int		res;

	if (*nbr == 0)
		return (0);
	while (*nbr == '0' && ft_strl(nbr) > 1)
		nbr++;
	res = ft_checkdic(dic, nbr, 0, "");
	if (res > 0 && last != 1)
		ft_putchar(' ');
	if (res != 0)
		return (res);
	res = ft_check_zt(dic, nbr, last);
	if (res < 0)
		return (res);
	nbr++;
	if (res > 0)
		nbr = nbr + res - 1;
	return (ft_say_tri(dic, nbr, last));
}
