#include "libmx.h"

char *mx_file_to_str(const char *file) {
    int sz;
    int fd;
    char *s;
    int length = mx_file_length(file);
    if (length <= 0)
        return NULL;
    sz = 0;
    s = mx_strnew(length);
    fd = open(file, O_RDONLY);
    if (fd < 0)
    {
        close(fd);
        free(&s);
        return NULL;
    }
    sz = read(fd, s, length);
    close(fd);
    return s;
}
