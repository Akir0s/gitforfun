#include <unistd.h>
#include <stdio.h>
void turn_to_hex(int x)
{   
    char hex[]="0123456789abcdef";
    if ( x < 16)
    {   
        write(1, "0", 1);
        write(1, &hex[x], 1);
    }
    else if ( x == 127)
    {
        write(1, "7f", 2);
    }
    else
    {
        write(1, "1", 1);
        x = x % 16;
        write(1, &hex[x], 1);
    }
}

void ft_putstr_non_printable(char *str)
{   
    int i;
    while ( *str )
    {
        if ((*str < 32 ) || (*str == 127))
        {
            write(1, "\\", 1);
            i = *str ;
            turn_to_hex(i);
        }
        else
        {
            write(1, str, 1);
        }
        str++;
    }
}

int main()
{   
    char A[] = "HiMotherFucker\nHi";
    ft_putstr_non_printable(A);
}