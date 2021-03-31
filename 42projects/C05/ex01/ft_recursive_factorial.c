#include <stdio.h>

int     ft_recursive_factorial(int nb)
{
    if (nb < 0)
        return (0);
    else if (nb == 0)
        return 1;
    else     
        nb *= ft_recursive_factorial(nb -1);
}

int     main()
{
    int nb;

    nb = 10;
    printf("%d", ft_recursive_factorial(nb));
}    
