#include <stdio.h>

int	is_spaces(char c)
{
	if ((c >= 0 && c <= 13) || c == 32)
		return (1);
	return (0);
}
int	count_words(char *str)
{
	int	status;
	int	count;

	status = 0;
	count = 0;
	while(*str)
	{
		if(is_spaces(*str))
		{
			status = 0;
		}
		else if(status == 0)
		{
			status = 1;
			count++;
		}
		str++;
	}
	return (count);
}

int main(void)
{
	char str[] = "Luanda linda/esbelta como nunca";
	int	num = count_words(str);
	printf("%d\n",num);
	return (0);
}
