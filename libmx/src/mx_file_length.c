#include "libmx.h"

int mx_file_length(const char *file) {
    int fd;
    int sz = 0;
    int flag = O_RDONLY;
    char buffer;
    int counter = 0;

    fd = open(file, flag);
    for (; (sz = read(fd, &buffer, 1)) > 0; counter++);
    close(fd);
    return counter;
}
