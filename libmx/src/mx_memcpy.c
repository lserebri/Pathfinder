#include "libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n) {
    size_t i;
    unsigned char *dest = dst;
    const char *source = src;
    
    for (i = 0; i < n; i++)
        dest[i] = source[i];
    return dst;
}
