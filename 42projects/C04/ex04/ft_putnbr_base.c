#include <unistd.h>
#include <stdio.h>

long int     check_nbr(int nbr)
{
    long int nbr_2;

    if (nbr >= 0)
        return (nbr);
    else 
    {
        write(1, "-", 1);
        nbr += 1;
        nbr_2 = (nbr * (-1));
        nbr_2++;
        return(nbr_2);
    }
}

void    turn_to_base(int nbr, int size,char *base)
{
    long int nbr_2;
    char new_nbr[1000];
    long int x;
    int i;

    i = 0;
    nbr_2 = check_nbr(nbr);
    while(nbr_2 > 0)
    {
        x = nbr_2;
        x = x % (size + 1);
        new_nbr[i] = base[x];
        nbr_2 /= (size + 1);
        i++;
    }
    i--;
    while( i >= 0)
    {   
        
        write(1, &new_nbr[i], 1);
        i--;
    }
}

int     size_of_base(char *base)
{
    int size;

    size = 0;
    while ( *base )
    {   	
        size++;
        base++;
    }
    base -= size -1 ;
    size--;
    return (size);
}

int     check_base(char *base, int size)
{
    int i;

    while ( size >= 0)
    {
        i = size -1 ;
        while ( i >= 0)
        {
            if( base[i] == base[size] || base[size] == '+' || base[size] == '-')
            {
                return (0);
                break ;
            }
            i--;
        }
        size--;
    }
    return (1);
}

void    ft_putnbr_base(int nbr, char *base)
{
    int size;

    size = size_of_base(base);
    if (size >= 1 && check_base(base, size))
        turn_to_base(nbr, size, base);
}

int main()
{
    char base[]= "0123456789";
    int nbr = -9; 
    ft_putnbr_base(nbr, &base[0]);
}
