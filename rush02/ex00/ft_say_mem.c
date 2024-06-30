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

char	*ft_endzero(char *str, int nb)
{
	char	*b;
	int		end;
	int		i;
	char	c;

	end = ft_strl(str);
	if (nb > end)
		return (0);
	b = malloc(sizeof(char) * end);
	i = 0;
	while (i < end)
	{
		c = str[i];
		if (i >= (end - nb))
			c = '0';
		b[i] = c;
		i++;
	}
	b[i] = 0;
	return (b);
}

char	*ft_zeros(int len)
{
	char	*mas;
	int		i;

	mas = (char *)malloc(sizeof(char) * (len + 1));
	mas[0] = '1';
	i = 1;
	while (i < len)
	{
		mas[i] = '0';
		i++;
	}
	mas[i] = '\0';
	return (mas);
}

/*
** conver one digit char to string
*/

char	*ft_getdigit(char c)
{
	char	*b;

	b = malloc(2);
	b[0] = c;
	b[1] = 0;
	return (b);
}
