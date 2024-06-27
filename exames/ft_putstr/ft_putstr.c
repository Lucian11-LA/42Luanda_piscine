/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfredo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 15:39:02 by lalfredo          #+#    #+#             */
/*   Updated: 2024/06/27 16:15:40 by lalfredo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putchar(char c)
{
	write(1,&c,1);
}
void ft_putstr(char *str)
{
	int i;
	i = 0;

	while(str[i])
	{
		write(1,&str[i],1);
		i++;
	}
}