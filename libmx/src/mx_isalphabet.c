#include "libmx.h"

int mx_isalphabet(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return 1;
    return 0;
}
