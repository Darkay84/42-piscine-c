#include <stdio.h>

char	*ft_strrev(char *str);

int		main(void)
{
    char 	str[] = "w0l0l0";
    char 	strrev[] = "0l0l0w";
    char 	*test;
    int		i;
    
    test = ft_strrev(str);
    i = 0;
    while (strrev[i] != '\0')
    {
        if (strrev[i] != test[i])
        {
            printf("FAKE AND GAY\n");
            return (0);
        }
        ++i;
    }
    printf("CORRECT\n");
    return (0);
}