#include "main.h"
#include <limits.h>
/**
 * bbinary - converts integer to binary
 * @n: unsigned int
 * Return: number ofdigits
 */
int bbinary(unsigned int n)
{
	int i = 1;

	if (n > 1)
		i = (1 + bbinary(n / 2));
	_putchar((n % 2) + '0');

	return (i);
}
/**
 * pbinary - converts integer to binary
 * @m: va_list fromprintf
 * Return: number ofdigits
 */
int pbinary(va_list m)
{
	unsigned int k = va_arg(m, unsigned int);
	int a = bbinary(k);

	return (a);
}
