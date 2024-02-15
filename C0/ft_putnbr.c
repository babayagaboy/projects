#include <unistd.h>

void ft_putnbr(int nb)
{
    int i;
    int isNegative;
    char[20] totalnb;

    i = 0;
    isNegative = 0;
    
    if (nb < 0)
    {
        isNegative = 1;
        char[i] = '-';
        i++;
    }

    while (nb != 0)
    {
        totalnb[i++] = '0' + (nb % 10);
        nb = nb / 10;
    }
    write (1 , totalnb, i);
}

int main()
{
    ft_putnbr(420);
    return (0);
}