#include <stdio.h>

int ft_iterative_factorial(int nb);

int main(void)
{
    int j = 0;
    
    while (j < 21)
    {
        int i = ft_iterative_factorial(j);
        printf("%d\n", i);
        j++;
    }
}