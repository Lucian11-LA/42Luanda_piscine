#include <stdio.h>

int	ft_atoi(const char *str)
{
	int result;
	int sign;

	sign = 1;
	result = 0;
	while(*str && (*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while(*str && (*str == 43 || *str == 45))
	{
		if (*str == 45)
			sign *= -1;
		str++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	return (result * sign);
}
