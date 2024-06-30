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

int	main(int argc, char **argv)
{
	char	*dic;
	int		i;
	int		res;

	dic = DICNAME;
	if (argc > 2)
		dic = argv[1];
	if (argc == 1)
		ft_putstr("Error\n");
	if (argc == 2)
	{
		res = ft_say_arg(dic, argv[1]);
	}
	if (argc > 2)
	{
		i = 2;
		while (i < argc)
		{
			res = ft_say_arg(dic, argv[i]);
			i++;
			if (res == -2)
				return (res);
		}
	}
	return (res);
}
