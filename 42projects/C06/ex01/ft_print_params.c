#include <unistd.h>
#include <stdio.h>

void    main(int argc, char *argv[])
{
    int i;
    int j;

    j = 1;
    while ( j < argc)
    {
        i = -1;
        while (argv[j][++i])
        {
            write(1, &argv[j][i], 1);
        }
        write(1, "\n", 1);
        j++;
    }
}