#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
    char A[]= "Hello";
    char B[100];
    unsigned int n = 3;
    ft_strncpy(B, A, n);
    int i;
    for( i = 0; i < 5; i++)
    {
        printf("%c", B[i]);
    }
    return 0;
}