/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfredo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:29:13 by lalfredo          #+#    #+#             */
/*   Updated: 2024/07/02 15:29:25 by lalfredo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ft_abs.h"

int	main(void)
{
	int	index;

	index = -5;
	while (index < 5)
	{
		printf("macros::abs(%d) = %d\n", index, ABS(index));
		index++;
	}
}
