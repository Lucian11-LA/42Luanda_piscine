/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfredo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:54:41 by lalfredo          #+#    #+#             */
/*   Updated: 2024/06/27 14:55:18 by lalfredo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	char_is_in_str(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		++charset;
	}
	return (0);
}

unsigned int	get_number_of_chars(int i, char *str, char *charset)
{
	unsigned int	result;

	result = 0;
	while (str[i] && !char_is_in_str(str[i], charset))
	{
		++i;
		++result;
	}
	return (result);
}

unsigned int	get_number_of_strings(char *str, char *charset)
{
	unsigned int	result;
	int				i;

	result = 0;
	i = 0;
	while (str[i])
	{
		if (!char_is_in_str(str[i], charset)
			&& (!i || char_is_in_str(str[i - 1], charset)))
			++result;
		++i;
	}
	return (result);
}

void	copy_string(char *dest, char *src, int src_i, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[src_i];
		++i;
		++src_i;
	}
	dest[i] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char			**result;
	unsigned int	n;
	int				i;
	int				j;

	n = get_number_of_strings(str, charset);
	result = malloc(sizeof(*result) * (n + 1));
	i = 0;
	j = 0;
	while (str[i])
	{
		if (!char_is_in_str(str[i], charset)
			&& (!i || char_is_in_str(str[i - 1], charset)))
		{
			n = get_number_of_chars(i, str, charset);
			result[j] = malloc(sizeof(**result) * (n + 1));
			copy_string(result[j], str, i, n);
			++j;
		}
		++i;
	}
	result[j] = 0;
	return (result);
}
