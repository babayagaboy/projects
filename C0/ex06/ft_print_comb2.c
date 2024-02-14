#include <unistd.h>

int ft_putchar(int a1, int a2, int b1, int b2)
{
    write(1, &a1, 1);
    write(1, &a2, 1);
    write(1, " ", 1);
    write(1, &b1, 1);
    write(1, &b2, 1);
    write(1, ", ", 2);
    return (0);
}

void ft_print_comb2(void)
{
    int a1;
    int a2; // primeiro nr (00) 00

    int b1; //segundo nr 00 (00)
    int b2;

    a1 = 0; //(0)0 00
    a2 = 0; //0(0) 00
    b1 = 0; //00 (0)0
    b2 = 0; //00 0(0)
    while (a1 <= 9)
    {
        a2 = 0;
        b1 = 0;
        b2 = 0;
        while (a2 <= 9)
        {
            b1 = 0;
            b2 = 0;
            while (b1 <= 9)
                {
                    b2 = 0;
                    while (b2 <= 9)
                    {
                        ft_putchar(a1 + '0', a2 + '0', b1 + '0', b2 + '0');
                        b2++;
                    }
                    b1++;
                }
            a2++;
        }
        a1++;
    }
}

int main(void)
{
    ft_print_comb2();
    return (0);
}