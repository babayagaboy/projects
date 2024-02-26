#include <unistd.h>
#include <stdio.h>

 unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
 {
    int i;
    int j;

    j = 0;
    i = 0;
    while (dest[i] != '\0' && i < size)
        i++;
    while (src[j] != '\0' && i < size)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (i);
 }

 int main ()
 {
    char dest[20] = "Hello, ";
    char src[] = "world!";
    unsigned int size = 2;

    printf("size of concatenaded string is: %d\n", ft_strlcat(dest, src, size));
    printf("the concatenaded string is: %s\n", dest);
    return (0);
 }