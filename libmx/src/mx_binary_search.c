#include "libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count) {
	int i = 0;
	int left = 0;
	int right = size - 1;
	
	(*count) = 0;
	while (left <= right)
	{
		(*count)++;
		i = (right + left) / 2;
		if (mx_strcmp(s, arr[i]) > 0)
			left = i + 1;
		else if (mx_strcmp(s, arr[i]) < 0)
			right = i - 1;
		else if (mx_strcmp(s, arr[i]) == 0)
			return i;
	}
	(*count) = 0;
	return -1;
}
