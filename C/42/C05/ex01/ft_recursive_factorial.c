#include <unistd.h>
#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    if (nb <= 0)
        return 0;
    if (nb == 2)
        return 2;
    return (nb * ft_recursive_factorial(nb - 1));
}

int main()
{
    int nb = 10;
    printf("nr: %d\nfatorial: %d", nb , ft_recursive_factorial(nb));
    return 0;
}
