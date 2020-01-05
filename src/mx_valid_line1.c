#include "pathfinder.h"

static void output_error() {
    mx_printstr("error: line 1 is not valid\n");
}

int mx_valid_line1(char *line, char *text) {
    if (text[0] == '\n')
        output_error();
    if(!mx_isnumber(line) || mx_strlen(line) > 10 || mx_atoi(line) < 0)
    {
        output_error();
        return 0;
    }
    return 1;
}
