#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

char    *ft_strrev(char *str)
{
	int size;
	int i;
	char temp;

	i = 0;
	size = ft_strlen(str);
	while( i < (size / 2))
	{
		temp = str[i];
		str[i] = str[size - i -1];
		str[size - i - 1] = temp;
		i++;
	}

	return (str);
}
