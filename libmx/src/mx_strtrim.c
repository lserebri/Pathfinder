#include "libmx.h"

char *mx_strtrim(const char *str) {
    int i;
    int length;
    char *newstr;
    int front = 0;
    int back = 0; 

    if (!str)
        return NULL;
    length = mx_strlen(str);
    for (;(mx_isspace(str[front])); front++);
    for (;(mx_isspace(str[length - 1])); length--, back++);
    newstr = mx_strnew(mx_strlen(str) - (back + front));
    for (i = 0;  front < mx_strlen(str) - back; front++, i++)
        newstr[i] = str[front];
    return newstr;
}
