#include "libmx.h"

int mx_isnumber(char *text)
{
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] < 48 || text[i] > 57)
            return 0;
    }
    return 1;
}
