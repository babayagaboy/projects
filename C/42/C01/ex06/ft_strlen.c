#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return(i);
}

int main()
{
    printf("%d characters." , ft_strlen("Hello, World!"));
    return (0);
}