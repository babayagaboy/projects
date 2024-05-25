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
            return (div);
        div++;
    }
    return (1);
}

int main()
{
    int nb;
    int isPrime;

    nb = 104659;
    isPrime = ft_is_prime(nb);

    if (isPrime == 1)
        printf("%d = primo" , nb);
    if (isPrime != 1)
        printf("%d = nao primo foi divisivel por: %d\n" , nb, isPrime);
    return (0);  
}