#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int lenght;

    lenght = 0;
    while (src[lenght] != '\0')
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
    ft_strcpy(dest, src);
    
    for (int i = 0; dest[i] != '\0'; i++)
        write(1, &dest[i], 1);
}