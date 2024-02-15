#include <unistd.h>

void ft_putnbr(int nb)
{
    char totalnb[20];
    char temp;
    int numDigits;
    int sign;
    int start;
    int end;

    numDigits = 0;
    sign = (nb < 0) ? -1 : 1;
    nb = (nb < 0) ? -nb : nb;

    if (nb == 0)
    {
        totalnb[numDigits++] = '0'; // Handle the case when nb is 0
    }
    else
    {
        while (nb != 0)
        {
            totalnb[numDigits++] = '0' + nb % 10;
            nb /= 10;
        }
    }

    if (sign == -1)
        totalnb[numDigits++] = '-';

    start = 0;
    end = numDigits - 1;

    while (start < end)
    {
        temp = totalnb[start];
        totalnb[start] = totalnb[end];
        totalnb[end] = temp;

        start++;
        end--;
    }
    
    write(1 , totalnb, numDigits);
}

int main()
{
    ft_putnbr(-4241240);
    return (0);
}
