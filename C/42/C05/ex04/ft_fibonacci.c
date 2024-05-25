#include <unistd.h>
#include <stdio.h>

int ft_fibonacci(int index)
{
    if (index < 0)
        return (-1);
    if (index == 1 || index == 2)
        return (1);
    return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int main()
{
    int index = 8;

    printf("o numero de sequencia %d, `e: %d" , index , ft_fibonacci(index));

    return (0);
}