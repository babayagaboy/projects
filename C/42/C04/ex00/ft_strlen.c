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
    char *str = "Hello, World!";
    printf("\"%s\" has " , str);
    printf("%d characters.\n" , ft_strlen(str));
    return (0);
}