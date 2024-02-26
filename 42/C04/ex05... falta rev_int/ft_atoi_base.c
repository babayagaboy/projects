#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *str)
{
    int i;
    int isneg;
    int result;

    result = 0;
    isneg = 1;
    i = 0;

    while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
        i++;

    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            isneg *= -1;
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return(result * isneg);
}

void ft_rev_int_tab(int *tab, int size)
{
    int i;
    int temp1[size];
    int temp2[size];
    int temp3;

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

int ft_atoi_base(char *str, char *base)
{
    int i;
    int j;
    int nbr;
    int isneg;
    int lenght;
    int number;

    isneg = 1;
    i = 0;
    j = 0;
    number = 0;

    nbr = ft_atoi(str);

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
                return (0);
            j++;
        }
        i++;
    }

    i = 0;

    while (nbr != 0)
    {
        number = number * 10 + nbr % lenght;
        nbr /= lenght;
        i++;
    }

    ft_rev_int_tab(&number, i);
    
    return (number * isneg);
}

int main()
{
    char *str;
    char *base;
    int result;

    str = "123";
    base = "01";

    result = ft_atoi_base(str, base);

    if (result)
    {    
        printf("original: %s\n" , str);
        printf("translated: %d\n" , result);
    }
    else
        printf("erro");
    return (0);
}