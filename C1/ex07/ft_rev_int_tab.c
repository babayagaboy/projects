#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int i;
    int temp1[size];
    int temp2[size];
    int temp3;

    i = 0;
    while (i < size)
    {
        temp1[i] = tab[i];
        temp2[i] = tab[i];
        i++;
    }

    i = 0;
    while (i < size)
    {
        temp3 = temp1[i]; // temp = 1  
        temp1[i] = temp2[size - 1 - i]; // temp[0] = 4
        temp2[size - 1 - i] = temp3; // temp[4] = 1

        i++;
    }
    i = 0;
      while (i < size)
    {
         tab[i] = temp1[i];
         i++;
    }
}

int main()
{
    int tab[] = {1, 2, 3, 4};
    int size;

    size = 4;
    
    printf("normal:");
    for (int i = 0; i < size; i++) {
        printf(" %d", tab[i]);
    }
    printf("\n");

    ft_rev_int_tab(tab, size);
    
    printf("reversed:");
    for (int i = 0; i < size; i++) {
        printf(" %d", tab[i]);
    }
    printf("\n");

    return (0);
}