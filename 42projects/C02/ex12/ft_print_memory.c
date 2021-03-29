#include <stdio.h>
#include <unistd.h>

void    ft_print_address(char *a)
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
    while (i >= 0)
    {
        write(1, &addr[i], 1);
        i--;
    }
    write(1, ":\n", 2);
}

int     main()
{
    char A[] = "hello It's me again.You know i can't forget you miss dunno why";
    printf("test address : %p\n", A);
    ft_print_address(A);
}