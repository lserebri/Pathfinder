#include "libmx.h"

int mx_bubble_sort(char **arr, int size) {
	int i = 0;
	char *temp = 0;
	int count = 0;
	int n = 1;

	while (n != 0)
	{
		n = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (mx_strcmp(arr[i], arr[i + 1]) > 0)
			{
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				n++;
				count++;
			}
		}
	}
	return count;
}
