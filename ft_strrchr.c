#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    i = 0;
    int last_i;
    last_i = -1;

    while (s[i] != '\0')
    {
        if ((int)s[i] == c)
            last_i = i;
        i++;
    }

    if (last_i == -1)
        return (NULL);
    return(&(((char *)s)[last_i]));
}
