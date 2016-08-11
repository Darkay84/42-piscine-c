#include <stdio.h>

char *ft_rot42(char *str);

int	main()
{
    char	tab[] = "abcdefghijklmnopqrstuvwxyz";
    printf("%s", ft_rot42(tab));
    return 0;
}