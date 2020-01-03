#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
    size_t i;
    unsigned char *dest = dst;
    const char *source = src;

    for (i = 0; i < n; i++, dest++)
    {
        *dest = source[i];
        if (*dest == c)
        {
            dest++;
            *dest = '\0';
            return dest;
        }
    }
    return NULL;
}
