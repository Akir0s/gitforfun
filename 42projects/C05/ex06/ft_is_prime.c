#include <stdio.h>

int     ft_is_prime(int nb)
{   
    int prime;
    int i;

    i = nb;
    prime = 1;
    if (nb <= 1)
        return 0;
    else if (nb == 2)
        return 1;
    while (nb > 2)
    {
        nb--;
        if ( (i % nb == 0 ))
        {
            prime = 0;
            break;
        }
    }
    return (prime); 
}

int     main()
{
    int nb;

    nb = 0;
    int i;
    for(i = 0; i != 30; i++)
    {
        nb++;
        printf("prime nb%d:%d\n", nb , ft_is_prime(nb));
    }
}