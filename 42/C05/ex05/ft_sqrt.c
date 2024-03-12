#include <unistd.h>
#include <stdio.h>

int ft_sqrt(int nb)
{
    int x;

    x = 1;

    if (nb < 0)
        return (0);
    while (x * x <= nb)
    {
        if (x * x == nb)
            return (x);
        x++;
    }
    return (0);
    
}

int main()
{
    int nb = 400;

    printf("a raiz quadrada de %d: %d" , nb , ft_sqrt(nb)); 

    return (0);
}