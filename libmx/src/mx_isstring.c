#include "libmx.h"

int mx_isstring(char *c)
{
    for(int i = 0; c[i]; i++) {
        if ((c[i] < 65 || c[i] > 90) && (c[i] < 97 || c[i] > 122))
            return 0;
    }
    return 1;
}
