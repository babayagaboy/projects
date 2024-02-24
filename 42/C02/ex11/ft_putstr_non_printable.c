#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr_non_printable(char *str)
{
    int i;

    i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 32 && str[i] < 127)
            ft_putchar(str[i]);
        else
        {
            ft_putchar("\\");
            if (str[i] >= 0 && str[i] <= 10)
                ft_putchar("0");
            
        }
    }
}

int main()
{

}