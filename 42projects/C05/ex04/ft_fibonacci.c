#include <stdio.h>

int     ft_fibonacci(int index)
{   
    int i;

    i = 0;         
    if (index < 0)
        return(-1);
    else if (index == 0)
        return (0);
    else if ( index < 3)
        return  (1);
    else
        return (i = ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int     main()
{
    int index;

    index = 35;
    printf("%d", ft_fibonacci(index));
}