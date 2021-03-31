#include <stdio.h>

int     ft_atoi(char *str)
{   
    int i;
    int nbr;

    i = 1;
    nbr = 0;
    while (*str == ' ' || *str == '+' || *str == '-')
    {
        if (*str == '-')
        {
            i *= (-1);
        }
        str++;
    }
    while (*str >= 48 && *str <= 57)
    {
        nbr = nbr * 10 + (*str - '0');
        str++; 
    }
    return (nbr * i);
}

int     main()
{
    char A[]= "----8742589abasda34634";
    printf("%d", ft_atoi(A));
}