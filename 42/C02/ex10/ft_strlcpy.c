#include <unistd.h>
#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int n)
{
    int lenght;

    lenght = 0;

    while (lenght < n)
    {
        dest[lenght] = src[lenght];
        lenght++;
    }

    dest[lenght] = '\0';

    return (lenght);
}

int main()
{
    char dest[100];
    char *src = "Hello, World!";
    unsigned int i;

    unsigned int n = 5;

    i = ft_strlcpy(dest, src, n);
    
    for (int i = 0; dest[i] != '\0'; i++)
        write(1, &dest[i], 1);

    printf("\n%d char copied", i);
    return (0);
}