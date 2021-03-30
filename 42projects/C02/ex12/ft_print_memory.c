#include <stdio.h>
#include <unistd.h>

void    out_char(char *a)
{
    if ((*a < 32 ) || (*a == 127))
        write(1, ".", 1);
    else
        write(1, a, 1);
}
char    *out_string_in_hex(char *a)
{
    char b[0];
    char x;

    b[0] = *a;
    x = b[0];      
    b[0] /= 16;
    b[0] += '0';
    write(1, &b[0], 1);
    x %= 16;
    if ( x < 10 )
        x += '0';
    else
        x += 87;
    write(1, &x, 1);
    return (a);
}
void    out_addr(char *a)
{   
    char    addr[16];
    long    c_addr;
    int     i;

    i = 0;
    c_addr = (long)a;
    while (c_addr > 0)
    {
        addr[i] = c_addr % 16;
        if (addr[i] < 10)
            addr[i] += '0';
        else
            addr[i] += 87;
        c_addr /= 16 ;
        i++;
    }
    while (i < 16)
    {
        addr[i] = '0';
		i++;
    }
    i--;
    while (i >= 0)
    {
        write(1, &addr[i], 1);
        i--;
    }
    write(1, ": ", 2); 
}
void    *ft_print_memory(char *a, unsigned int size)
{   
    int i;
    int j;
    int x= 0;

    i = 1; 
    while ( i < size + 1)
    {
        out_addr(a);     
        j = 1;
        while ( j < 17)
        {
            if (*a == '\0')
            {   
                while ( j < 17)
                {
                    write(1, " ", 1);
                    j++;
                    x++;
                }
                break;
            }
            out_string_in_hex(a);
            if (( j % 2 == 0))
                write(1, " ", 1);
            a++;
            j++;
        }
        a -= 16 - x;
        j = 1;
        while ( j < 17 - x)
        {
            out_char(a);
            j++;
            a++;
        }
        write(1, "\n", 1);
        i += 16;
    }
    return (a);
}

int     main()
{
    char A[] = "Bonjour les amin ches\t\t\tc est fou\ttout\tce qu on peut faire avec\t\t\tprint_memory\n\n\n\tlol\tlol\t \t";
    unsigned int size = sizeof(A)/sizeof(A[0]);
    ft_print_memory(A, size);
}
