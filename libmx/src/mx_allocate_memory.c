#include "libmx.h"

char **mx_allocate_memory(const char *s, char c) {
    int i;
    int countwords;
    int countchar;
    int j;
    char **newstr;

    countwords = mx_count_words(s, c);
    newstr = (char**)malloc(sizeof(char*) * (countwords + 1));
    for (i = 0, j = 0; s[i]; i++)
    {
        if (s[i] != c)
        {
            for (countchar = 0; s[i] != c && s[i]; i++)
                countchar++;
            newstr[j++] = mx_strnew(countchar);
        }
    }
    return newstr;
}
