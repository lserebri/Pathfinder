#include "libmx.h"

int mx_count_words(const char *str, char c) {
    int counter = 1;

    if (!str)
        return -1;
    if (mx_strlen(str) == 0)
        return 0;
    for (int i = 0; str[i]; i++)
    {
        if (str[i] == c)
            counter++;
        if (str[i] == c && str[i + 1] == c)
        {
            while (str[i] == c)
                i++;
        }
    }
    if (str[mx_strlen(str) - 1] == c)
        counter--;
    if (str[0] == c)
        counter--;
    return counter;
}
