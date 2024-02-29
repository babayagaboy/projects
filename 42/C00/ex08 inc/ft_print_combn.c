#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_combn(int n)
{
    int casa[n];
    int i;
    int i2;
    int y;
    int d;
    int j;

    j = 1;
    d = 9 - n;

    y = 0;
    i = 0;
    i2 = 0;
    casa[i] = 0; // a
    while (casa[i] <= d)
    {
        casa[i + 1] = casa[i] + 1; // a + 1
        
        printf(" casa 0: %d a\n casa 1: %d b\n", casa[i] , casa[i + 1]);
        while (i < n - 1)
        {
            i++;
            casa[i + 1] = casa[i] + 1; // b + 1
        }

        printf(" i1: %d c\n", casa[i]);
        while (casa[i2] <= d)
        {
            while(casa[i - j] <= 9 - d)
            {
                casa[i] = casa[i - 1] + 1;
                while (casa[i] <= 9)
                {
                        while(y < i)
                        {
                            ft_putchar('0' + casa[i2 + y]);
                            y++;
                        }
                        y = 0;
                        ft_putchar('0' + casa[i]);
                        write(1, ", ", 2);
                        casa[i]++;
                }
                casa[i - j]++;
            }
            casa[i2]++;
        }
    }
}

int main()
{
    int n;

    n = 3;
    ft_print_combn(n);
    return (0);
}