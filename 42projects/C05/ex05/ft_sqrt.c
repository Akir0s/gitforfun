#include <stdio.h>

int     find_step(int i)
{   int count;

    count = 1;
    while (i > 1)
    {
        count += 2;
        i -= count;
    }
    return (count);
}
int     ft_sqrt(int nb)
{   
    int step;
    int sqrt;
    int check;

    sqrt = 1;
    step = find_step(nb);
    if (nb <= 0)
        return(0);
    else if (nb == 1)
        return(1);
    else
    {
        sqrt += ft_sqrt(nb - step);
    }
    return(sqrt);
}

int     main()
{
    int nb;

    nb = 17;
    printf("sqrt: %d", ft_sqrt(nb));
}