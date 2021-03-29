unsigned int ft_strlcpy(char *dest, char *src, unsigned int n)
{   
    int count; 
    
    
    count = 0;
    if (n == 1)
    {
        return count;
    }
    while( *src && count < n - 1)
    {
        *dest = *src;
        dest++;
        src++;
        count++;
    }
    while ( count < n)
    {
        *dest = '\0';
        dest++;
        count++;
    }
    count--;
    return count;
}