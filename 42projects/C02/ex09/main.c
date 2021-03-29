#include <stdio.h>

char *ft_strcapitalize(char *str);

int main()
{
    char A[] = "+hi MYNAME +iS?mrpussy+w+h+a+t 024810asd";
    int size = sizeof(A)/sizeof(A[0]);
    ft_strcapitalize(A);
    int i;
    for ( i = 0; i < size; i++)
    {
        printf("%c", A[i]);
    }
}