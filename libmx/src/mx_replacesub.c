#include "libmx.h"

char *mx_replacesub(int length, const char *str, const char *sub, const char *replace) {
    int i;
    int j;
    int a;
    char *newstr = mx_strnew(length);

    for (a = 0, i = 0; str[i]; i++)
    {
        for (j = 0; str[i] == sub[j] && str[i]; j++, i++);
        if (j == mx_strlen(sub))
        {
            for (j = 0; replace[j];)
                newstr[a++] = replace[j++];
            i -= 1;
        }
        else
            newstr[a++] = str[i];
    }
    return newstr;
}
