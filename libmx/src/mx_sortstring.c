#include "libmx.h"

char **mx_sortstring(int argc, char **argv)
{
	int i;
	int	n = 1;
	char *temp;

	while (n != 0)
	{
		n = 0;
		for (i = 0; i < argc - 1; i++)
		{
			if (mx_strcmp(argv[i], argv[i + 1]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
				n++;
			}
		}
	}
    return argv;
}
