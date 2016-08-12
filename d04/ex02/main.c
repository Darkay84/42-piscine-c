#include <stdio.h>

int ft_iterative_power(int nb, int power);

int main(void)
{
    int j = 1;
    
    while (j < 7)
    {
        int i = ft_iterative_power(j,2);
        printf("%d\n", i);
        j++;
    }
}