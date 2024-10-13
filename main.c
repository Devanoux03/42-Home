#include "libft.h"
#include <string.h>
int main(void)
{
    printf("%s \n", (char *)(ft_memchr("Je fais des test", 'e', 1)));
    printf("%s \n", (char *)(memchr("Je fais des test", 'e', 2)));
}
