#include "pathfinder.h"

static void output_error(int count) {
    mx_printstr("error: line ");
    mx_printstr(mx_itoa(count));
    mx_printstr(" is not valid\n");
}

static int check_islands(char *line, int count) {
    int i = 0;
    char **array;

    array = mx_strsplit(line, ',');
    for (i = 0; array[i]; i++);
    if (i != 2 || !mx_isnumber(array[1]))
    {
        output_error(count);
        return 0;
    }
    return 1;
}

static int check_line(char *line, int count) {
    char **array;

    if (mx_count_substr(line, ",") > 1 || mx_count_substr(line, "-") > 1)
    {
        output_error(count);
        return 0;
    }
    array = mx_strsplit(line, ',');
    if (!check_islands(line, count))
        return 0;
    return 1;
}



int mx_valid_lines(char *text) {
    char **array = mx_strsplit(text, '\n');
    for (int i = 1; array[i]; i++)
    {
        if(!check_line(array[i], i + 1))
            return 0;
    }
    return 1;
}
