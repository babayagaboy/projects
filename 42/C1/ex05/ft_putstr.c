#include <unistd.h>

void ft_putstr(char *str)
{
    int i;
    char c;

    i = 0;
    while (str[i] != '\0')
    {
        c = str[i]; 
        write(1, &c, 1);
        i++;
    }
}

int main ()
{
    ft_putstr("Hello, World!");
    return (0);
}