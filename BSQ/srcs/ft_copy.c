/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 10:11:03 by gsouto            #+#    #+#             */
/*   Updated: 2024/07/03 10:11:04 by gsouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	**ft_copy(char **array_map)
{
	char	**new_array;
	int		i;
	int		array_len;

	i = 0;
	array_len = 0;
	while (array_map[array_len])
		array_len++;
	new_array = malloc(sizeof(char *) * (array_len + 1));
	while (array_map[i])
	{
		new_array[i] = ft_strdup(array_map[i]);
		i++;
	}
	new_array[array_len] = 0;
	return (new_array);
}
