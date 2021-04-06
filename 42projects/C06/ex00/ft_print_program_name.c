#include <unistd.h>

void    main(int argc, char *argv[])
{
    int i;

    i = -1;
    while ( argv[0][++i])
    {
        write(1, &argv[0][i], 1);
    }
    write(1, "\n", 1);
}