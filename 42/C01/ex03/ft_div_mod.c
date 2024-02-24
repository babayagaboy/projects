#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int main()
{
    int a;
    int b;
    int div;
    int mod;

    a = 70;
    b = 20;

    ft_div_mod(a, b, &div, &mod);
    printf("a: %d\nb: %d\ndiv: %d\nmod: %d\n" , a , b , div , mod);

    return (0);

}