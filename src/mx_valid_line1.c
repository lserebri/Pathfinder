#include "pathfinder.h"

static void output_error() {
    write(2, "error: line 1 is not valid\n", 27);
}

int mx_valid_line1(char *line, char *text, t_graph *m) {
    char *number;
    int i = 0;

    if (text[0] == '\n')
        output_error();
    if(!mx_isnumber(line) || mx_strlen(line) > 10 || mx_atoi(line) < 0)
    {
        output_error();
        return 0;
    }
    number = mx_strnew(mx_strlen(line));
    for (i = 0; line[i]; i++)
        number[i] = line[i];
    m->V = mx_atoi(number);
    mx_strdel(&number);
    return 1;
}
