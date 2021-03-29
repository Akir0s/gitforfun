char *ft_strcapitalize(char *str)
{   
    int where;

    while (*str)
    {
        if (*str < 65 || *str > 122 || (*str > 90 && *str < 97))
        {
            str++;
            continue;      
        }
        where = 0;
        while (!(*str < 65 || *str > 122 || (*str > 90 && *str < 97)))
        {
            if (where == 0)
            {   
                if ((( *str >= 'a') && (*str <= 'z')))
                {
                    *str -= 32;
                    where = 1;
                    str++;
                    continue;
                }
                else
                {
                    *str++;
                    where = 1;
                    continue ;
                }
            }
            else if (*str >= 'A' && *str <= 'Z')
            {
                *str += 32;
                str++;
                continue;
            } 
            str++;     
        }
        str++;
    }
    return (str);
}