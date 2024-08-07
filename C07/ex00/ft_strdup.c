/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfredo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 09:38:23 by lalfredo          #+#    #+#             */
/*   Updated: 2024/06/24 10:07:23 by lalfredo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i + 1);
}

char	*ft_strdup(char *src)
{
	char	*strcpy;
	int		len;
	int		i;

	len = ft_strlen(src);
	strcpy = malloc (sizeof(strcpy) * len);
	if (!strcpy)
		return (NULL);
	i = 0;
	while (i < len)
	{
		strcpy[i] = src[i];
		++i;
	}
	return (strcpy);
}
