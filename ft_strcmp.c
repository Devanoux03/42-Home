#include "libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
    int i;
    i = 0;
    while(s1[i] != '\0')
    {
        if((int)(s1[i]) != (int)(s2[i]))
            return ((int)(s2[i]) - (int)(s1[i]));
        i++;
    }
    return (0);
}
