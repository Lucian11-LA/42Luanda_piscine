#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_ulstr(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (c >= 'a' && c <= 'z')
			c = c - 32;
		else if (c >= 'A' && c <= 'Z')
			c = c + 32;
		ft_putchar(c);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_ulstr(av[1]);
	}
	ft_putchar('\n');
	return (0);
}
