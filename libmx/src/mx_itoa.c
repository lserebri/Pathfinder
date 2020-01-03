#include "libmx.h"

char *mx_itoa(int number) {
    char *str;
    int n = 0;
    int sign = 1;

    if (number == -2147483648 || number == 0)
        return mx_strdup(number ? "-2147483648" : "0");
    if (number < 0)
    {
        number *= -1;
        sign = -1;
        n++;
    }
    for (int temp = number; temp >= 1; n++)
        temp /= 10;
    str = mx_strnew(n);
    for (int i = 1; i <= n; i++, number /= 10)
        str[n - i] = number % 10 + '0';
    if (sign < 0)
        str[0] = '-';
    return str;
}
