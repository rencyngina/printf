#include "main.h"
/**
 * bbinary - converts integer to binary
 * @n: integer
 * Return: number ofdigits
 */
int bbinary(unsigned int n)
{
	char *str = base(n, 2);

	return (print_string(str));
}
