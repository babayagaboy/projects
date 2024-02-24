#include <unistd.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i;

    i = 0;
    while ((s1[i] != '\0' && s2[i] != '\0') && (i <= n - 1))
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
    unsigned int n;

    s1 = "asd";
    s2 = "asSSSS";
    n = 1;

    printf("returned %d" ,ft_strncmp(s1, s2, n));
    return (0);
}