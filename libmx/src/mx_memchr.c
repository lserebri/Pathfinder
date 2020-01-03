#include "libmx.h"

void *mx_memchr(const void *s, int c, size_t n) {
    size_t i;
    const char *str = s;
    
    for (i = 0; i < n; i++, str++)
        if (*str == c)
            return (void *)str;
    return NULL;
}
