#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
    write(1, ", ", 2);

}

void ft_print_combn(int n)
{
    int *casa;
    int i;
    int i2;
    int n2;

    n2 = n;
    i = 0;
    i2 = 0;
    casa[0] = 0; // a
    while (casa[i] <= 9 - n)
    {
        casa[i + 1] = casa[i] + 1; // a + 1
        
        printf(" casa 0: %d a\n casa 1: %d b\n", casa[i] , casa[i + 1]);
        while (i < n - 1)
        {
            i++;
            casa[i + 1] = casa[i] + 1; // a + 1
        }

        printf(" i1: %d c\n", casa[i]);
        
        while (casa[i] <= 9)
        {
                while (i2 < i)
                {
                    ft_putchar('0' + casa[i2]);
                    i2++;
                }
                
                ft_putchar('0' + casa[i]);
                casa[i]++;
        }
        // while (casa[i + 1] <= 10 - 1 - n2)
        // {
        //     printf(" i2: %d", casa[i]);
        //     ft_putchar(casa[i] + '0');
        //     n2--;
        // }
    }
}

int main()
{
    int n;

    n = 3;
    ft_print_combn(n);
    return (0);
}


// if (!(casa[0] == 9 - n))
//     write(1, ", ", 2);