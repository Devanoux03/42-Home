#include "libft.h"

int ft_isprint(int c)
{
    if (c >= 32 && c <= 254)
        return (0);
    return (1);
}