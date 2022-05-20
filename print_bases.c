#include "main.h"
#include <limits.h>
/**
 * bbinary - converts integer to binary
 * @n: integer
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
