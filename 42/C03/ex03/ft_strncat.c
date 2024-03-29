#include <unistd.h>
#include <stdio.h>

 char *ft_strncat(char *dest, char *src, unsigned int nb)
 {
    int i;
    int j;

    j = 0;
    i = 0;
    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0' && j < nb)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
 }

 int main ()
 {
    char dest[20] = "Hello, ";
    char src[] = "world!";
    unsigned int nb = 3;

    printf("%s", ft_strncat(dest, src, nb));
    return (0);
 }