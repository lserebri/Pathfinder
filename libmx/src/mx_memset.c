#include "libmx.h"

void *mx_memset(void *b, int c, size_t len) {
    size_t i;
    unsigned char *str = b;

    if (b && len > 0)
        for (i = 0; i < len; i++)
            str[i] = c;
    return b;
}
