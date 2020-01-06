#include "pathfinder.h"

static char **alloc_mem(char **array, char **lines, int len) {
    int i = 0;
    int j = 0;
    int count = 0;
    int k = 0;

    for(i = 1, k = 0; i < len; i++) {
        for (j = 0, count = 0; j <= mx_strlen(lines[i]); j++) {
            if (mx_isalphabet(lines[i][j])) {
                for (count = 0; mx_isalphabet(lines[i][j]); count++, j++);
                array[k] = mx_strnew(count);
                k++;
            }
        }
    }
    return array;
}

static char **full_array(char **array, char **lines, int len) {
    int i = 0;
    int j = 0;
    int a = 0;
    int k = 0;

    for (i = 1; i < len; i++) {
        for (j = 0; j <= mx_strlen(lines[i]); j++) {
            if (mx_isalphabet(lines[i][j])) {
                for (a = 0; mx_isalphabet(lines[i][j]); j++, a++)
                    array[k][a] = lines[i][j];
                k++;
            }
        }
    }
    return array;
}

static int count_islands(char **islands, int len) {
    int count = 1;

    for (int i = 0; i < len - 1; i++) {
        while (!mx_strcmp(islands[i], islands[i + 1]))
            i++;
        count++;
    }
    return count;
}

int mx_valid_islands(char **lines)
{
    int count;
    int countisland;
    char **islands;

    for (count = 1; lines[count]; count++);
    islands = (char **)malloc(sizeof(char *) * count * 2);
    islands = alloc_mem(islands, lines, count);
    islands = full_array(islands, lines, count);
    islands = mx_sortstring((count - 1) * 2, islands);
    countisland = count_islands(islands, (count - 1) * 2);
    if (mx_strcmp(lines[0], mx_itoa(countisland)) != 0) {
        mx_printstr("error: invalid number of islands\n");
        return 0;
    }
    return 1;
}
