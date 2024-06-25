/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfredo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 14:58:07 by lalfredo          #+#    #+#             */
/*   Updated: 2024/06/22 15:09:32 by lalfredo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_fibonacci(int index)
{
	int	n;

	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (0);
	if (index >= 2 && index <= 3)
		return (1);
	else
	{
		n = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (n);
	}
}
