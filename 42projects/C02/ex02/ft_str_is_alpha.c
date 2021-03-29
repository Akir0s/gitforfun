int ft_str_is_alpha(char *str)
{   
    int result;

    result = 1;
    while (*str)
    {
        if ( *str < 65 || *str > 122 || (*str > 90 && *str < 97))
        {
            result = 0;
            break;
        }
        str++;
    }
    return (result);
}