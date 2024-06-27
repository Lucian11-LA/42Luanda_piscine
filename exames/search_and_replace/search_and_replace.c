#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}
void ft_putstr(char *str)
{
	int i;
	i = 0;
	
	while(str[i])
	{
		write(1,&str[i],1);
		i++;
	}
}

char *ft_strcpy(char *s1, char *s2)
{
	int i;
	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int main(int ac, char **av)
{
	char str[100];
	char a;
	char b;
	int	i;
	i = 0;
	if(ac == 4 && av[2][1] == '\0' && av[3][1] == '\0')
	{	
		ft_strcpy(str,av[1]);
		a = av[2][0];
		b = av[3][0];

		while (str[i])
		{
			if (str[i] == a)
				str[i] = b;
			i++;
		}
		ft_putstr(str);
	}
	ft_putchar('\n');
	return (0);
}
