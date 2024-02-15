#include <unistd.h>
#include <stdio.h>
void ft_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main ()
{
    int a;
    int b;

    a = 3;
    b = 7;
    ft_swap(&a, &b);
    printf("a: %d\nb: %d\n", a, b);
    return (0);
}