#include <stdlib.h>

void    *ft_memcpy(void  *dest, const void *src, size_t n)
{
    size_t    i;
    char *ptr;
    char *ptr2;

    i = 0;
    ptr = (char *)(src);
    ptr2 = (char *)(dest);
    while (i < n)
    {
        ptr2[i] = ptr[i];
        i++;
    }
    return (ptr2);
}