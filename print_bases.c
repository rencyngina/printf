#include "main.h"
#include <limits.h>
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
/**
 * poctal - converts integer to octal
 * @m: va_list fromprintf
 * Return: number ofdigits
 */
int poctal(va_list m)
{
	unsigned int k = va_arg(m, unsigned int);
	int a = ooctal(k);

	return (a);
}
/**
 * pbhex - converts integer to hex
 * @m: va_list fromprintf
 * Return: number ofdigits
 */
int pbhex(va_list m)
{
	unsigned int k = va_arg(m, unsigned int);
	int a = bhex(k);

	return (a);
}
/**
 * pshex - converts integer to hex
 * @m: va_list fromprintf
 * Return: number ofdigits
 */
int pshex(va_list m)
{
	unsigned int k = va_arg(m, unsigned int);
	int a = shex(k);

	return (a);
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
