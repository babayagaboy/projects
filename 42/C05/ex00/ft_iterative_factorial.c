#include <unistd.h>
#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int nb2;

    nb2 = nb - 1;
    while (nb2 > 0)
        nb *= nb2--; 
    return (nb);
}

int main()
{
    int nb = 10;
    printf("nr: %d\nfatorial: %d", nb , ft_iterative_factorial(nb));
    return 0;
}
