#include <unistd.h>
#include <stdio.h>

void    print_result(int (*a)[10])
{
    int i = -1 , j = -1 , swap;
    while (++j < 10)
    {
        i = -1;
        while (++i <10)
        {
            if ( a[i][j])
            {
                swap = i + '0';
                write(1, &swap, 1);
            }
        }
    }
    write(1, "\n", 1);
}
int     ft_check_queen(int (*a)[10], int where, int queen)
{   
    int i , j;
    for ( i = queen; i >= 0 ; i--)
        if (a[where][i] == 1)
            return 0;
    for ( i = where , j = queen; i >= 0 && j >= 0; i--, j--)
        if (a[i][j])
            return 0;
    for ( i = where , j = queen; i < 10 && j >= 0; i++, j--)
        if (a[i][j])
            return 0;
    return 1;
}

int     ft_put_queens(int (*a)[10], int queen, int *count)
{   
    int i;

    if (queen == 10)
    {   
        *count += 1;
        print_result(a);
    }    
    i = -1;
    while ( ++i < 10 )
    {   
         
        if (ft_check_queen(a, i, queen) == 1) 
        {   
            a[i][queen] = 1;
            ft_put_queens(a, queen + 1, count);
            a[i][queen] = 0;    
        }                     
    }
    return (*count);
}
int     ft_ten_queens_puzzle(void)
{
    int chess_board[10][10];
    int queen;
    int where;
    int count;

    where = 0;
    while ( where < 10)
    {
        queen = 0;
        while (queen < 10)
        {
            chess_board[where][queen] = 0;
            queen++;
        }
        where++;
    }
    count = 0;
    ft_put_queens(chess_board, 0, &count);
    return(count);
}
int     main(void)
{
    printf("%d",ft_ten_queens_puzzle());
}