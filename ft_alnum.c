#include "libft.h"

int ft_alnum(int c)
{
    if(ft_digit(c) == 0 || ft_isalpha(c) == 0)
        return (0);
    return (1);
}