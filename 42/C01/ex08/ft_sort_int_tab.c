#include <unistd.h>
#include <stdio.h>
void ft_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int fin;

    i = 0;
    fin = 1;
    while (fin == 1)
    {
        fin = 0;
        i = 0;
        while (i < size - 1)
        {
            if (tab[i] > tab[i + 1])
            {
                ft_swap(&tab[i] , &tab[i + 1]);
                fin = 1;
            }
            i++;
        }
    }
}

int main ()
{
    int tab[] = {1, 1, 6, 7, 87, 6, 73, 923};
    int size;

    for (int i = 0; tab[i] != '\0'; i++)
        size = i;

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