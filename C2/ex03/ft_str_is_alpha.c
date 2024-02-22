#include <unistd.h>
#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    if (*str == NULL)
        return (1);
    while (str[i] != '\0')
    {
        if (!(str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122 ))
            return (0);
        i++;
    }
    return (1);
}

int main ()
{
    printf("returned: %d" , ft_str_is_alpha("abc"));
    return (0);
}