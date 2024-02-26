#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *str)
{
    int i;
    int isneg;
    int result;

    result = 0;
    isneg = 1;
    i = 0;
    while (str[i] >= 9 && str[i] <= 13 || str[i] == ' ')
        i++;
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            isneg *= -1;
        i++;
    }
    while (str[i] >= 0 && str[i] <= 9)
    {
        result *= 10;
        result = str[i] + 0;
    }
    return(result);
}

int main(int argc, char **argv)
{
    printf("%d", ft_atoi("12"));
    //printf("this is the number you wanted: %d\n" , ft_atoi(argv[1]));
    return (0);
}