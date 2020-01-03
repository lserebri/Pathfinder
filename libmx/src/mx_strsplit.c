#include "libmx.h"

char **mx_strsplit(const char *s, char c) {
    int i = 0;
    int j = 0;
    int a = 0;
    char **newstr;

    if (!s)
        return NULL;
    newstr = mx_allocate_memory(s, c);
    for (; s[a]; a++)
    {
        if (s[a] != c)
        {
            for (j = 0; s[a] != c && s[a]; j++, a++)
                newstr[i][j] = s[a];
            i++;
        }
    }
    newstr[i] = NULL;
    return newstr;
}
