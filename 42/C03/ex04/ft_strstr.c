#include <stdio.h>
#include <unistd.h>

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;
    int n;

    i = 0;
    j = 0;

    while (str[i] != '\0')
    {
        j = 0;
        n = i;
        while(str[i] == to_find[j])
        {
            if(to_find[j + 1] == '\0')
                return(&str[n]);
            i++;
            j++;
        }
        i++;
    }
    return(NULL);
}

int main()
{
    char str[] = "Hello, world! This is a test string.";
    char to_find[] = "world";
    char *result;

    result = ft_strstr(str, to_find);

    if (result != NULL)
        printf("Substring found at index: %ld\n", result - str);
    else
        printf("Substring not founded.");
    return (0);
}