#include "libmx.h"

static char *allocate_mem(char *strtrim) {
    int i;
    int spacecount;
    char *newstr;

    for (i = 0, spacecount = 0; strtrim[i]; i++)
    {
        if (mx_isspace(strtrim[i]))
        {
            i++;
            while (mx_isspace(strtrim[i++]))
                spacecount++;
        }
    }
    newstr = mx_strnew(mx_strlen(strtrim) - spacecount);
    return newstr;
}

char *mx_del_extra_spaces(const char *str) {
    int  i;
    int j;
    char *strtrim;
    char *newstr;

    if (!str)
        return NULL;
    strtrim = mx_strtrim(str);
    newstr = allocate_mem(strtrim);
    for (i = 0, j = 0; strtrim[i]; i++, j++)
    {
        if (mx_isspace(strtrim[i]))
        {
            newstr[j++] = ' ';
            for (; mx_isspace(strtrim[i]); i++);
        }
        newstr[j] = strtrim[i];
    }
    mx_strdel(&strtrim);
    return newstr;
}
