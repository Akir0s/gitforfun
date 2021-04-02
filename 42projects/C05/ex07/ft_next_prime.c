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

int ft_next_prime(int nb)
{
    int check;
    
    check = ft_is_prime(nb);
    while (check == 0)
    {   
       nb++;
       check = ft_is_prime(nb);
    }
    return (nb);
}

int     main()
{
    int nb;

    nb = -3;
    printf("nb %d:next_prime:%d\n", nb , ft_next_prime(nb));
    
}