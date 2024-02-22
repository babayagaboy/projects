#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
    write(1, ", ", 2);

}

void ft_print_combn(int n)
{
        n = n - 1;
        int indexNumber[n];
        int firstNumber;
        int index;

        index = 0;
        firstNumber = 0;
    do
    {
        while (index <= 9)
        {
            indexNumber[firstNumber] = index;
            ft_putchar(indexNumber[firstNumber] + '0');
            index++;
        }
        
        indexNumber[firstNumber + 1] = firstNumber + 1;
        firstNumber++;
    } 
    while (indexNumber[firstNumber] < 10 - n && n != 0);
}

int main()
{
    int n;

    n = 10;
    ft_print_combn(n);
    return (0);
}