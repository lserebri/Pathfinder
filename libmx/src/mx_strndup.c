#include "libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    char *strnew;

    if ((int)n < 0)
        return (char *)s1;
    if (mx_strlen(s1) < (int)n)
        strnew = mx_strnew(mx_strlen(s1));
    else
        strnew = mx_strnew(n);
    return mx_strncpy(strnew, s1, n);
}
