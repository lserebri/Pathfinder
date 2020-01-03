#include "libmx.h"

int mx_isspace(int argument) {
    if ((argument >= 9 && argument <= 13) || argument == 32)
        return 1;
    return 0;
}
