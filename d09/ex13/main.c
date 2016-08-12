#include <stdio.h>

int ft_compact(char **tab, int length);

int main()
{
    char str1[] = "Voila un test";
    char *tab[10]= {str1, str1, 0, 0, 0, 0, 0, 0, str1};
    
    printf("%d", ft_compact(tab, 9));
    return (0);
}