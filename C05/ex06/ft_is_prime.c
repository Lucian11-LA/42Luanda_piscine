/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfredo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 15:39:29 by lalfredo          #+#    #+#             */
/*   Updated: 2024/06/22 15:50:03 by lalfredo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	index;
	int	count;

	index = 1;
	count = 0;
	if (nb == 0 || nb == 1)
		return (0);
	if (nb > 2)
	{
		while (index <= nb)
		{
			if (nb % index == 0)
				count++;
			index++;
		}
		if (count == 2)
			return (1);
	}
	return (0);
}
