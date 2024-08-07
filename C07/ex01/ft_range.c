/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfredo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 10:19:25 by lalfredo          #+#    #+#             */
/*   Updated: 2024/06/24 11:01:48 by lalfredo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*a;
	int	len;
	int	i;

	if (min >= max)
		return (NULL);
	len = max - min;
	a = malloc(sizeof(*a) * len);
	if (!a)
		return (NULL);
	i = 0;
	while (i < len)
	{
		a[i] = min;
		++min;
		++i;
	}
	return (a);
}
