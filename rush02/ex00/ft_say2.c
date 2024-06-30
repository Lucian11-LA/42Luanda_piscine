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

int	ft_iszeroes(char *nbr)
{
	int	zflag;

	zflag = 1;
	nbr++;
	while (*nbr != 0 && zflag == 1)
	{
		if (*nbr != '0')
			zflag = 0;
		nbr++;
	}
	return (zflag);
}

int	ft_countzeros(char *nbr)
{
	int	i;

	i = 0;
	nbr++;
	while (*nbr != 0 && *nbr == '0')
	{
		i++;
		nbr++;
	}
	return (i);
}

int	ft_add_suffix(char *dic, char *nbr)
{
	int		res;
	char	*zs;
	int		z;
	char	*sufix;

	z = 0;
	if (ft_tp(nbr) == 0 && ft_tn(nbr) > 0)
	{
		z = ft_countzeros(nbr);
		zs = ft_zeros(ft_tn(nbr) * 3 + 1);
		if (ft_strl(nbr) - 1 == z)
			sufix = "";
		else
			sufix = TDELIM;
		res = ft_checkdic(dic, zs, 1, sufix);
		free(zs);
		if (res < 0)
			return (res);
		if (res == 0)
			return (-2);
	}
	return (z);
}

int	ft_check_z(char *dic, char *nbr)
{
	int		i;
	char	*zs;
	int		res;

	i = 0;
	res = 0;
	while (i < ft_tn(nbr) * 3 && res == 0 && *nbr != '1')
	{
		zs = ft_endzero(nbr, i + 1);
		res = ft_checkdic(dic, zs, 1, DELIM);
		free(zs);
		if (res < 0)
			return (res);
		if (res > 0)
			return (ft_strl(nbr) - i - 1);
		if (i < 2)
			i++;
		else
			i = i + 3;
	}
	return (0);
}
