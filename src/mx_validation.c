#include "pathfinder.h"

int mx_validation(int count, char **inpt) {
    char *text = mx_file_to_str(inpt[1]);
    char **lines = mx_strsplit(text, '\n');

    if(!mx_output_validresult(count, inpt))
        return 0;
    if (!mx_valid_line1(lines[0], text))
        return 0;
    if (!mx_valid_lines(text))
        return 0;
    if (!mx_valid_islands(lines))
        return 0;
    return 1;
}
