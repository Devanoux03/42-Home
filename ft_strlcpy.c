#include "libft.h"

void *ft_strlcpy(char *dest, const char *src, size_t n)
{
    size_t i;
    i = 0;

    size_t dest_len;
    dest_len = 16;

    while (i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while(i < dest_len)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}
