#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main(void)
{
    char dest[100];
    char src[40];
    
    ft_strcpy(src, "testing is magic");
    ft_strcpy(dest, src);
    printf("%s\n", dest);
    return (0);
}
