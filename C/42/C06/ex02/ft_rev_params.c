#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return(i);
}

void ft_rev_params(int argc, char **argv)
{
    int i;

    i = argc - 1;
    while (i > 0)
    {
        write(1, argv[i], ft_strlen(argv[i]));
        write(1, "\n", 1);
        i--;
    }
}

int main(int argc, char **argv)
{
    ft_rev_params(argc, argv);
    return 0;
}