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
    if (length == 0) {
        return 1;
        close(fd);
    }
    close(fd);
    return 2;
}

int mx_output_validresult(int count, char **inpt) {
    if (count != 2)
    {
        write(2, "usage: ./pathfinder [filename]\n", 31);
        return 0;
    }
    else if (check_input(inpt[1]) == 0) {
        write(2, "error: file ", 12);
        write(2, inpt[1], mx_strlen(inpt[1]));
        write(2, " does not exist\n", 16);
        return 0;
    }
    else if (check_input(inpt[1]) == 1) {
        write(2, "error: file ", 12);
        write(2, inpt[1], mx_strlen(inpt[1]));
        write(2, " is empty\n", 10);
        return 0;
    }
    return 1;
}
