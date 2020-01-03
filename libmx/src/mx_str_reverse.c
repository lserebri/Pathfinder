#include "libmx.h"

void mx_str_reverse(char *s) {
    int length;
    int i = 0;

    if (!s)
        return;
    length = mx_strlen(s);
    if (s)
    {
        while (i < (mx_strlen(s)) / 2)
        {
            mx_swap_char(&s[i], &s[length - 1]);
            length--;
            i++;
        }
    }
}
