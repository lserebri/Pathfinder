#include "libmx.h"

int mx_get_substr_index(const char *str, const char *sub) {
    int n;
    int j;
    int i;

    if (!str || !sub)
        return -2;
    for(i = 0; str[i]; i++)
    {
        for (j = 0, n = 0; str[i] == sub[j]; i++, j++, n++);
        if (n == mx_strlen(sub))
            return (i - n);
    }
    return -1;
}
