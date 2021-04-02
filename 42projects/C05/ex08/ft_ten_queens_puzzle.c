#include <unistd.h>
#include <stdio.h>

int     ft_next_queen(int (*a)[10], int where)
{   
    while ( where < 10)
    {

    }
}

int     change_chessboard(int (*a)[10], int where)
{
    int i;

    i = where;
    while (i < 10)
    {
        a[where][i + where ] = where ;
        a[i][where] = where;
        a[where][i] = where;
    }

}
int     ft_ten_queens_puzzle(void)
{
    int chess_board[10][10];
    int queen;
    int where;

    where = 0;
    while ( where < 10)
    {
        queen = 0;
        while (queen < 10)
        {
            chess_board[where][queen] = -1;
            queen++;
        }
        where++;
    }
    queen = 0;
    where = 0;
    while ( queen < 10)
    {
        change_chessboard(chess_board, queen);
        queen++;
    }
}

int     main()
{
    printf("%d",ft_ten_queens_puzzle());
}