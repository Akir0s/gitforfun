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

    sqrt = 1;
    step = find_step(nb);
    if (nb <= 0)
        return(0);
    else if (nb == 1)
        return(1);
    else if ((nb - step) > (nb+1 - find_step(nb+1)))
        sqrt += ft_sqrt(nb - step);
    else
        return (0);    
    return(sqrt);
}

int     main()
{
    int nb;

    nb = -1;
    while ( nb <10001)
    { 
        if (ft_sqrt(nb) || nb == 0)
          printf("sqrt of %d = %d\n",  nb, ft_sqrt(nb));
        nb++;
    }
}