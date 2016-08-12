#include <stdio.h>

void ft_sort_integer_table(int *tab, int size);

int main(void)
{
    int i = 0;
    int tab[] = {-42,1,3,6,7,0,2,1,42};
    ft_sort_integer_table(tab, 9);
    while (i < 9)
    {
        printf("%d\n", tab[i]);
        i++;
    }
}