#include <unistd.h>
#include <stdio.h>

int ft_ft(int *nbr)
{
    *nbr = 42;
}

int main ()
{
    int num = 0;
    ft_ft(&num);
    printf("%d", num);
    return (0);
}