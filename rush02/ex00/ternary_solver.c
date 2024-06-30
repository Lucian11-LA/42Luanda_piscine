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

char	*tern1(char c1, char c2)
{
	if (c1 != c2)
		return (DDELIM);
	else
		return ("");
}

char	*tern2(int n1, int n2)
{
	if (n1 == n2)
		return (DDELIM);
	else
		return ("");
}

void	tern3(int last)
{
	if (last)
		ft_putstr(HDELIM);
	else
		ft_putstr(DELIM);
}
