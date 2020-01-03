#include "libmx.h"

char *mx_strcat(char *restrict s1, const char *restrict s2) {
    int l1 = mx_strlen(s1);
    int l2 = 0;
    
    while (s2[l2])
        s1[l1++] = s2[l2++];
    s1[l1] = '\0';
    return (char*)s1;
}
