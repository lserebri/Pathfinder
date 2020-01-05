#include "pathfinder.h"

static int check_input(char *file) {
    int length;
    int fd;

    fd = open(file, O_RDONLY);
    if (fd < 0) {
        close(fd);
        return 0;
    }
    length = mx_file_length(file);
    if (length == 0)
        return 1;
    return 2;
}

int mx_output_validresult(int count, char **inpt) {
    if (count != 2)
    {
        mx_printstr("usage: ./pathfinder [filename]\n");
        return 0;
    }
    else if (check_input(inpt[1]) == 0) {
        mx_printstr("error: file ");
        mx_printstr(inpt[1]);
        mx_printstr(" does not exist\n");
        return 0;
    }
    else if (check_input(inpt[1]) == 1) {
        mx_printstr("error: file ");
        mx_printstr(inpt[1]);
        mx_printstr(" is empty\n");
        return 0;
    }
    return 1;
}
