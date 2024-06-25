/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfredo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 09:24:58 by lalfredo          #+#    #+#             */
/*   Updated: 2024/06/12 17:56:59 by lalfredo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	x;

	x = '0';
	while (x <= '9')
	{
		ft_putchar(x);
		x++;
	}
}

int main()
{
	ft_print_numbers();
	return 0;
}