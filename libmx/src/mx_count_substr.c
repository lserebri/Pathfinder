#include "libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    int i; 
    int counter = 0;

    if (!str || !sub)
        return -1;
    if (mx_strlen(sub) == 0)
        return 0;
    for (i = 0; str[i]; i++)
        if (mx_strncmp(&str[i], sub, mx_strlen(sub)) == 0)
            counter++;
    return counter;
}
