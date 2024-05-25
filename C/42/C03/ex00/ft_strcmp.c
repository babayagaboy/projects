#include <unistd.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] > s2[i])
            return (1);
        if (s1[i] < s2[i])
            return (-1);
        i++;
    }
    return (0);
}

int main()
{
    char *s1;
    char *s2;

    s1 = "hello";
    s2 = "world";

    printf("returned %d" ,ft_strcmp(s1, s2));
    return (0);
}