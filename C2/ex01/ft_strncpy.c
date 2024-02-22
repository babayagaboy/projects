#include <unistd.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int lenght;

    lenght = 0;

    while (lenght < n)
    {
        dest[lenght] = src[lenght];
        lenght++;
    }

    dest[lenght] = '\0';

    return (dest);
}

int main()
{
    char dest[100];
    char *src = "Hello, World!";

    unsigned int n = 5;

    ft_strncpy(dest, src, n);
    
    for (int i = 0; dest[i] != '\0'; i++)
        write(1, &dest[i], 1);
}