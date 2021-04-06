#include <unistd.h>

int ft_strcmp(const char *a, const char *b)
{
    while (*a && *a == *b)
    {
        a++;
        b++;
    }
    return *a - *b;
}

void    ft_put_in_order(int argc, char *argv[])
{
    int i, j;
    char *temp;

    for (i = 1; i < argc; i++)
    {
        for (j = i; j > 0 && ft_strcmp(argv[j-1], argv[j]) > 0; j--)
        {
            *temp = argv[j-1];
            argv[j-1] = argv[j];
            argv[j] = temp;
        }
    }
}

void    main(int argc, char *argv[])
{
    int i , j;

    ft_put_in_order(argc - 1, argv + 1);
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