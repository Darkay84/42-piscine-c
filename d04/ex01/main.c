#include <stdio.h>

int ft_recursive_factorial(int nb);

int main(void)
{
    int i = ft_recursive_factorial(-1);
    printf("%d\n",i);
    int j = ft_recursive_factorial(0);
    printf("%d\n",j);
    int k = ft_recursive_factorial(1);
    printf("%d\n",k);
    int l = ft_recursive_factorial(2);
    printf("%d\n",l);
    int m = ft_recursive_factorial(4);
    printf("%d\n",m);
    int n = ft_recursive_factorial(5);
    printf("%d\n",n);
    int o = ft_recursive_factorial(6);
    printf("%d\n",o);
    int p = ft_recursive_factorial(7);
    printf("%d\n",p);
    int q = ft_recursive_factorial(8);
    printf("%d\n",q);
    int r = ft_recursive_factorial(12);
    printf("%d\n",r);
}