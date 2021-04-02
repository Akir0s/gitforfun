#include <stdio.h>

void print_2_d_array(int (*a)[10])
{   
    int i , j ;
    i = 0;
    while ( i < 10)
    {
        j = 0;
        printf("grammi %d: ", i);
        while (j < 10)
        {
            printf(" %d ", a[i][j]);
            j++;
        }
        i++;
        printf("\n");
    }
}
int     main()
{   int i = 0 , j , count =0;
    int two_d_array[10][10];
    int *where = two_d_array[0];

    while (i < 10 )
    {
        j = 0;
        while (j < 10)
        {
            two_d_array[i][j]= 0;
            j++;
        }
        i++;
    }
    i = 0;
    while ( i < 10 )
    {   
        two_d_array[i][i] = 1;
        two_d_array[i][0] = 1;
        two_d_array[0][i] = 1;   
        i++;
    }
    print_2_d_array(two_d_array);
}