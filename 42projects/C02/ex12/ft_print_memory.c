#include <stdio.h>
#include <unistd.h>

void ft_print_address(char *a)
{   
    char *b= &*a ;
    char hex[] = "01234567890abcdef";
    
    printf("%p\n", b);

}

int main()
{
    char A[] = "hello It's me again.    ";
    ft_print_address(A);
    printf("test address : %p\n", A);

}