#include "libft.h"

void *ft_strlcat(char *dest, const char *src, size_t n)
{
    size_t i;
    i = 0;
    while (i < n)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    return (dest);
}
