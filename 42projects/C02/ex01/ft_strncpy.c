char *ft_strncpy(char *dest, char *src, unsigned int n)
{   
    int count; 

    count = 0;
    while( *src && count < n )
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
    return dest;
}