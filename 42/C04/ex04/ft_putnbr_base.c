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

void ft_putnbr_base(int nbr, char *base)
{
    int i;
    int j;
    int isneg;
    int lenght;
    char number[20];
    int erro;

    isneg = 1;
    i = 0;
    j = 0;

    if(nbr < 0)
    {
        isneg *= -1;
        nbr *= -1;
    }

    while (base[i] != '\0')
        i++;

    lenght = i;
    i = 0;

    while (base[i] != '\0')
    {
        j = 0;
        while (base[j] != '\0')
        {
            if((base[i] == base[j]) && i != j)
                erro = 1;
            j++;
        }
        i++;
    }

    i = 0;

    while (nbr != 0 && erro != 1)
    {
        number[i] = base[nbr % lenght];
        nbr /= lenght;
        i++;
    }
    if(isneg == -1 && erro != 1)
        write(1, "-", 1);
    number[i] = '\0';

    ft_rev_char_tab(number, i);
    
    i = 0;

    while (number[i] != '\0' && erro != 1)
    {
        write(1, &number[i], 1);
        i++;
    }
}

int main()
{
    int nbr;
    char *base;

    nbr = -123;
    base = "0123456789ABCDEF";

    printf("original: %d\n" , nbr);
    ft_putnbr_base(nbr, base);
    return (0);
}