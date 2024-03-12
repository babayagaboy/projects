#include <unistd.h>
#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return (0);
    if (power == 0)
        return (1);
    return (nb *= ft_recursive_power(nb , power - 1));
}

int main()
{
    int nb = 5;
    int power = 5;

    printf("%d elevado a %d e` igual a: %d" , nb , power , ft_recursive_power(nb , power));
    return (0);
}