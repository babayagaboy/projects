#include <unistd.h>
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int temp1[size];
    int temp;

    i = 0;

    while (i < size)
    {
        temp1[i] = tab[i];
        i++;
    }

    i = 0;
    while (temp1[i] < temp1[i + 1])
    {
        i = 0;
        while (i < size)
        {
            if (temp1[i] > temp1[i + 1])
            {
                temp = temp1[i];
                temp1[i] = temp1[i + 1];
                temp1[i + 1] = temp;
            }
            i++;
        }
    }

    i = 0;
    
    while (i < size)
    {
        tab[i] = temp1[i];
        i++;
    }
}

int main ()
{
    int tab[] = {1, 3, 7, 2, 6, 8};
    int size = 6;

    printf("normal: ");
    for (int i = 0; i < size; i++) {
        printf(" %d", tab[i]);
    }

    ft_sort_int_tab(tab, size);
    printf("\n");
    
    printf("organized: ");
    for (int i = 0; i < size; i++) {
        printf(" %d", tab[i]);
    }

}