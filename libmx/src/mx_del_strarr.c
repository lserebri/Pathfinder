#include "libmx.h"

void mx_del_strarr(char ***arr) {
    int i = 0;

    if (arr && *arr)
    {
        for (;(*arr)[i] != NULL; i++)
            mx_strdel(&(*arr)[i]);
        free(*arr);
        *arr = NULL;
    }
}
