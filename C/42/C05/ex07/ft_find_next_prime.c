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
    return (nb);
}

int ft_find_next_prime(int nb)
{
    int isPrime;

    isPrime = ft_is_prime(nb);

    if (isPrime != 0)
        return (nb);
    else
        ft_find_next_prime(nb + 1);
}

int main()
{
    int nb;

    nb = 120;
    printf("%d is prime" , ft_find_next_prime(nb));

    return (0);
}