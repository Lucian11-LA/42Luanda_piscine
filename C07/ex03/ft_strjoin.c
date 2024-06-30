/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfredo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:27:35 by lalfredo          #+#    #+#             */
/*   Updated: 2024/06/30 15:07:06 by lalfredo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_process(char *str, char *sep, int *i)
{
	int	z;

	z = 0;
	while (sep[z])
	{
		str[*i] = sep[z];
		z++;
		(*i)++;
	}
}

void	ft_conc(char **strs, char *sep, char *str, int size)
{
	int		i;
	int		j;
	int		z;

	i = 0;
	j = 0;
	while (j < size)
	{
		z = 0;
		while (strs[j][z])
		{
			str[i] = strs[j][z];
			z++;
			i++;
		}
		if ((j + 1) < size)
		{
			ft_process(str, sep, &i);
		}
		j++;
	}
	str[i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;
	int		length;

	i = 0;
	length = 0;
	while (i < size)
	{
		length += ft_strlen(strs[i]);
		i++;
	}
	length += ((size - 1) * ft_strlen(sep));
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (str == ((void *)0))
		return ((void *)0);
	ft_conc(strs, sep, str, size);
	return (str);
}
