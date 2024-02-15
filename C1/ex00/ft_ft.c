#include <unistd.h>
#include <stdio.h>

int ft_ft(int *nbr)
{
    write(1, &nbr, 2);
    printf("%d\n" , nbr);
    printf("%d\n" , *nbr);
}

int main ()
{
    int n = 42;

    int *ip = &n;
    ft_ft(ip);
    printf("%d\n" , *ip);
    return (0);
}