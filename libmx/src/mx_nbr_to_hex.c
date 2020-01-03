#include "libmx.h"

char *mx_nbr_to_hex(unsigned long nbr) {
	char *hex;
	long temp = nbr;
	int n = 0;

	for (;temp != 0; temp /= 16, n++);
	hex = mx_strnew(n);
	n -= 1;
	for (;nbr != 0; n--)
	{
		temp = 0;
		temp = nbr % 16;
		if (temp < 10)
			hex[n] = temp + 48;
		else
			hex[n] = temp + 87;
		nbr /= 16;
	}
	return hex;
}
