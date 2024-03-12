#include <unistd.h>
#include <stdio.h>

int ft_is_prime(int nb)
{
    int div;

    div = 2;
    if (nb <= 1)
        return (0);
    if (nb == 2)
        return (1);

    while (div <= nb / 2)
    {
        if (nb % div == 0)
            return (0);
        div++;
    }
    return (1);
}

int main()
{
    int nb;
    int isPrime;

    nb = 619;
    isPrime = ft_is_prime(nb);

    if (isPrime == 1)
        printf("%d = primo" , nb);
    if (isPrime == 0)
        printf("%d = nao primo" , nb);
    return (0);  
}