#include <unistd.h>
#include <stdio.h>

void ft_rev_char_tab(char *tab, int size)
{
    int i;
    char temp1[size];
    char temp2[size];
    char temp3;

    i = 0;
    while (i < size)
    {
        temp1[i] = tab[i];
        temp2[i] = tab[i];
        i++;
    }

    i = 0;
    while (i < size)
    {
        temp3 = temp1[i]; // temp = 1  
        temp1[i] = temp2[size - 1 - i]; // temp[0] = 4
        temp2[size - 1 - i] = temp3; // temp[4] = 1

        i++;
    }
    i = 0;
      while (i < size)
    {
         tab[i] = temp1[i];
         i++;
    }
}

void ft_putnbr(int nb)
{
    char number[20];
    int i;

    i = 0;

    while (nb != 0)
    {
        number[i] = (nb % 10) + '0';
        nb /= 10;
        i++;
    }
    number[i] = '\0';

    ft_rev_char_tab(number, i);

    i = 0;
    while (number[i] != '\0')
    {
        write(1, &number[i], 1);
        i++;
    }
}

int main()
{
    int nb = 123456789;

    ft_putnbr(nb);
    return(0);
}