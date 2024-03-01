#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_combn_recursive(int n , int index , int start , int *arr)
{
    int i;
    i = 0;

    if (index == n) 
    {
        while(i < n)
        {
            ft_putchar(arr[i] + '0');
            i++;
        }
        if (arr[0] < (10 - n)) {
            ft_putchar(',');
            ft_putchar(' ');
        }
        return;
    }

    i = start;

    while (i < 10) 
    {
        arr[index] = i;
        ft_print_combn_recursive(n, index + 1, i + 1, arr);
        i++;
    }
}

void ft_print_combn(int n)
{
    int arr[10];
    ft_print_combn_recursive(n, 0 , 0 , arr);
    ft_putchar('\n');
}

int main()
{
    ft_print_combn(5);
    return 0;
}