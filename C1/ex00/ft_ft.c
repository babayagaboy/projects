#include <unistd.h>
#include <stdio.h>

int ft_ft(int *nbr)
{
    int n;

    n = 42;
    *nbr = n;

    write(1, *nbr, 2);    
}

int main ()
{
    int num;
    int *ip = &num;

    ft_ft(ip);
    return (0);
}