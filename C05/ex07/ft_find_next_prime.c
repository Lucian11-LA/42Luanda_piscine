/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfredo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 15:51:11 by lalfredo          #+#    #+#             */
/*   Updated: 2024/06/22 16:04:03 by lalfredo         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
	{
		return (2);
	}
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
