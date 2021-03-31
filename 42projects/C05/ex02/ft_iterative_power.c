#include <stdio.h>

int     ft_iterative_power(int nb, int power)
{   
    int i;

    i = nb;
    if (power < 0)
        return(0);
    else if (power == 0)
        return(1);
    while (power > 1)
    {
        nb *= i;
        power -= 1;
    }
    return (nb);
}

int     main()
{
    int nb;
    int power;

    nb = 3;
    power = 11;
    printf("%d", ft_iterative_power(nb, power));
}