#include <stdio.h>

char *ft_strcpy();

int main()
{   
    int i;
    char A[] = "hello son of a bitch";
    char B[100];
    ft_strcpy(B, A);
    int size = sizeof(A)/sizeof(A[0]);
    for (i = 0; i < size + 3  ; i++)
    {
        printf("%c", B[i]);
    }
    return 0;    
}
