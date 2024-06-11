#include <unistd.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}

void ft_print_alphabet(void)
{
    char c;
    c = 'a';

    while(c>='a' && c<='z')
    {
        ft_putchar(c);
        c++;
    }
}

