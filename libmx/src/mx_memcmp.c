#include "libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n) {
    size_t i = 0;
    const char *str1 = s1;
    const char *str2 = s2;

	for (;str1[i] == str2[i] && i < n && str1[i] && str2[i]; i++);
	return (str1[i] - str2[i]);
}
