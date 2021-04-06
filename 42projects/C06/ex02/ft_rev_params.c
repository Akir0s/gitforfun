#include <unistd.h>

void    main(int argc, char *argv[])
{
    int i;

    while ( argc > 1)
    {
        i = -1;
        while (argv[argc - 1][++i])
        {
            write(1, &argv[argc - 1][i], 1);
        }
        write(1, "\n", 1);
        argc--;
    }
}