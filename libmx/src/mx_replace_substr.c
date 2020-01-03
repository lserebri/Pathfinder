#include "libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
    int noccurance = mx_count_substr(str, sub);
    int length;

    if (!str || !sub || !replace)
        return NULL;
    length = mx_strlen(str) - (noccurance * (mx_strlen(sub) - mx_strlen(replace)));
    
    return mx_replacesub(length, str, sub, replace);
}
