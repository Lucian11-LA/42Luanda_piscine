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
	int	*array;
	int	i;

	i = 0;
	if (min >= max)
	{
		return ((void *)0);
	}
	array = (int *)malloc(sizeof(int) * (max - min));
	if (!array)
		return ((void *)0);
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
