#include "libmx.h"

void *mx_memmem(const void *big, size_t big_len, 
const void *little, size_t little_len) {
    size_t i;
    const char *b = big;
    const char *l = little;

    if ((big_len < little_len) || (little_len == 0) || big_len == 0)
        return NULL;
    for (i = 0;i < big_len; i++, b++)
    {
        if (mx_memcmp(b, l, little_len - 1) == 0)
            return (void *)b;
    }
    return NULL;
}
