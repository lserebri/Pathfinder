#include "libmx.h"

unsigned long mx_hex_to_nbr(const char *hex) {
	unsigned long decimal = 0;
	int i = 0;
	int val = 0;
	int len = mx_strlen(hex) - 1;
	
	for (i = 0; hex[i] != '\0'; i++)
	{
		if (hex[i] >= '0' && hex[i] <= '9')
			val = hex[i] - 48;
		else if (hex[i] >= 'a' && hex[i] <= 'f')
			val = hex[i] - 97 + 10;
		else if (hex[i] >= 'A' && hex[i] <= 'F')
			val = hex[i] - 55;
		decimal += val * mx_pow(16, len);
		len--;
	}
	return decimal;
}
