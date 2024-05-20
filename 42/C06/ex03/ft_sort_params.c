#include <unistd.h>

void ft_swap(char **a, char **b)
{
    char *temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

void ft_sort_params(int argc, char **argv)
{
    int i;
    int j;
    int sorted;

    sorted = 0;

    while (!sorted)
    {
        sorted = 1;
        i = 1;

        while (i < argc - 1)
        {
            j = 0;
            while (argv[i][j] != '\0' && argv[i + 1][j] != '\0' && argv[i][j] == argv[i + 1][j])
            {
                j++;
            }
            if (argv[i][j] > argv[i + 1][j] || (argv[i][j] != '\0' && argv[i + 1][j] == '\0'))
            {
                ft_swap(&argv[i], &argv[i + 1]);
                sorted = 0;
            }
            i++;
        }
    }

    i = 1;
    while (i < argc)
    {
        write(1, argv[i], ft_strlen(argv[i]));
        write(1, "\n", 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    ft_sort_params(argc, argv);
    return 0;
}
