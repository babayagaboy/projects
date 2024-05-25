#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return(i);
}

void ft_print_program_name(int argc, char **argv)
{
    write(1, argv[0], ft_strlen(argv[0]));
}

int main (int argc , char **argv)
{
    ft_print_program_name(argc, argv);
    return 0;
}

// gcc ft_print_program_name.c -o a
// a.exe
// .\a.exe cu a a f rt aro