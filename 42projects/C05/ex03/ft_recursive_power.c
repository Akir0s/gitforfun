#include <stdio.h>

int     ft_recursive_power(int nb, int power)
{
    if ( power < 0)
        return (0);
    else if ( power == 0)
        return (1);
    else 
        return (nb *= ft_recursive_power(nb, power - 1));
}

int     main()
{
    int nb;
    int power;

    nb = -2;
    power = 11;
    printf("%d", ft_recursive_power(nb, power));
}