#include <unistd.h>

int ft_putchar(char a, char b, char c)
{
    write(1, &a, 1);
    write(1, &b, 1);
    write(1, &c, 1);

    return (0);
}
void ft_print_comb(void)
{
    int a;
    int b;
    int c;

    a = 0;

    while (a <= 7)
    {
        b = a + 1;
        while (b <= 8)
        {
            c = b + 1;
            while (c <= 9)
            {
                ft_putchar('0' + a, '0' + b, '0' + c);
                if (!(a == 7))
                    write(1, ", ", 2);
                c++;
            }
            b++;
        }
        a++;
    }
}

int main()
{
    ft_print_comb();
    return (0);
}