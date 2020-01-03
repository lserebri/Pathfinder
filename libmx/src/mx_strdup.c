#include "libmx.h"

char *mx_strdup(const char *str) {
	char *strnew = mx_strnew(mx_strlen(str));

	return  mx_strcpy(strnew, str);
}
