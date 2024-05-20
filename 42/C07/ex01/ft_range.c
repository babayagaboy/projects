#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int *ft_rev(int *tab, int size)
{
    for (int i = 0; i < size / 2; i++) {
        int temp = tab[i];
        tab[i] = tab[size - 1 - i];
        tab[size - 1 - i] = temp;
    }
    return tab;
}

int *ft_range(int min, int max)
{
    int i;
    int *range;

    i = 0;
    
    if (min >= max)
        return NULL;
    
    range = (int *) malloc((max - min) * sizeof(int)); // Corrigindo o tamanho da matriz
    
    if (range == NULL)
        return NULL;

    while (min < max) // Corrigindo a condição de parada
    {
        range[i] = min;
        min++;
        i++;
    }

    range = ft_rev(range, i); // Passando o tamanho correto da matriz

    return (range);
}

int main()
{
    int min, max;
    int *range;
    min = 5;
    max = 11;

    range = ft_range(min , max);

    if (range != NULL)
    {
        for (int i = 0; i < max - min; i++) // Corrigindo a condição de parada
        {
            printf("%d: %d\n", i, range[i]);
        }
    }
    else
    {
        printf("Memory allocation failed or invalid range\n");
    }
    
    free(range);

    return 0;
}
