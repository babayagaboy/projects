#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

char *ft_strdup(char *src)
{
    int i;
    char *target;

    i = 0;
    target = (char *) malloc(ft_strlen(src) + 1);
    if (target == NULL)
        return NULL;

    while (src[i] != '\0')
    {
        target[i] = src[i];
        i++;
    }
    target[i] = '\0';
    
    return (target);
}

int main()
{
    char *src = "Hello, World!";
    char *dup = ft_strdup(src);
    
    if (dup != NULL)
    {
        printf("duplicated string: %s\n", dup);
        free(dup);
    }
    else
    {
        printf("Memory allocation failed\n");
    }

    return 0;
}