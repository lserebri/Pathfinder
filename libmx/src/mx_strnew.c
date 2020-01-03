#include "libmx.h"

char *mx_strnew(const int size) {
	int i = 0;
	char *str = (char *)malloc((size + 1) * sizeof(char));

	if (str == NULL)
		return NULL;
	while (i < size + 1)
	{
		str[i] = '\0';
		i++;
	}
	return str;
}
