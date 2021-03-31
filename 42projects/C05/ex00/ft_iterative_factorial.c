#include <stdio.h>

int     ft_interative_factorial(int nb)
{
    int factorial;

    factorial = 1;
    if (nb < 0)
        return (0);
    else if ( nb == 0)
        return (1);
    else
    {
        while ( nb > 0)
        {   
            factorial *= nb * (nb -1 );
            nb -= 2; 
        }
        return (factorial);
    }
}

int     main()
{
    int nb;

    nb = 10;
    printf("%d", ft_interative_factorial(nb));
}