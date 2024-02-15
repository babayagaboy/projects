#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *a / *b;
    *b = temp % *b;
}

int main()
{
    int a;
    int b;

    a = 70;
    b = 20;

    printf("a: %d\nb: %d\n", a , b);
    ft_ultimate_div_mod(&a, &b);
    printf("div: %d\nmod: %d\n" , a , b);

    return (0);
}