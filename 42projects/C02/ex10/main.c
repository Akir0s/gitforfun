#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int n);

int main()
{
    char A[]= "Hello";
    char B[100];
    unsigned int n = 3;
    ft_strlcpy(B, A, n);
    int i;
    for( i = 0; i < 8; i++)
    {
        printf("%c", B[i]);
    }
    printf("\n%d", ft_strlcpy(B, A, n));
    return 0;
}