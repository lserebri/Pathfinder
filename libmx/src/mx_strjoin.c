#include "libmx.h"

char *mx_strjoin(const char *s1, const char *s2) {
    int i;
    char *strnew;
    int counter = 0;

    if (!s1 && !s2)
        return NULL;
    if (!s1 && s2)
        return mx_strdup(s2);
    if (s1 && !s2)
        return mx_strdup(s1);
    strnew = mx_strnew(mx_strlen(s1) + mx_strlen(s2));
    for(i = 0; i < mx_strlen(s1); s1++)
        strnew[counter++] = *s1;
    for(i = 0; i < mx_strlen(s2); s2++)
        strnew[counter++] = *s2;
    return strnew;
}
