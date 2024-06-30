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

int	ft_tn(char *nbr)
{
	return ((ft_strl(nbr) - 1) / 3);
}

int	ft_tp(char *nbr)
{
	return ((ft_strl(nbr) - 1) % 3);
}

char	*ft_slice_tri(char *nbr)
{
	int		i;
	int		end;
	char	*tri;

	end = ft_tp(nbr) + 1;
	tri = malloc(end + 1);
	i = 0;
	while (i < end)
	{
		tri[i] = *nbr;
		i++;
		nbr++;
	}
	tri[i] = 0;
	return (tri);
}
