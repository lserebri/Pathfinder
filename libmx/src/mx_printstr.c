#include "libmx.h"

void mx_printstr(const char *s) {
	int i = 0;

	while (i < mx_strlen(s))
	{
		write(1, &s[i], 1);
		i++;
	}
}
