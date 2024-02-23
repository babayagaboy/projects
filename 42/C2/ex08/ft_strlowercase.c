#include <unistd.h>
#include <stdio.h>

char *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    return (str);
}

int main()
{
    char str[] = "SADA";

    printf("Upper: %s\n" , str);

    ft_strupcase(str);
    
    printf("Lower: %s\n" , str);
    return (0);
}