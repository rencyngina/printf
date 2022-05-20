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
 * ooctal - converts integer to octal
 * @n: unsigned int
 * Return: number ofdigits
 */
int ooctal(unsigned int n)
{
	int i = 1;
	static int j;

	if (!n && j)
		return (0);

	if (n > 0)
	{
		j++;
		i = (1 + ooctal(n / 8));
	}
	if (n && j)
		_putchar((n % 8) + '0');
	if (!j)
		_putchar('0');

	return (i);
}
/**
 * bhex - converts integer to hex
 * @n: unsigned int
 * Return: number ofdigits
 */
int bhex(unsigned int n)
{
	int i = 1;
	static int j;

	if (!n && j)
		return (0);

	if (n > 0)
	{
		j++;
		i = (1 + bhex(n / 16));
	}
	if (n && j && (n % 16) == 15)
		_putchar('F');
	if (n && j && (n % 16) == 14)
		_putchar('E');
	if (n && j && (n % 16) == 13)
		_putchar('D');
	if (n && j && (n % 16) == 12)
		_putchar('C');
	if (n && j && (n % 16) == 11)
		_putchar('B');
	if (n && j && (n % 16) == 10)
		_putchar('A');
	if (n && j && (n % 16) < 10)
		_putchar((n % 16) + '0');

	if (!j)
		_putchar('0');

	return (i);
}
/**
 * shex - converts integer to hex
 * @n: unsigned int
 * Return: number ofdigits
 */
int shex(unsigned int n)
{
	int i = 1;
	static int j;

	if (!n && j)
		return (0);

	if (n > 0)
	{
		j++;
		i = (1 + shex(n / 16));
	}
	if (n && j && (n % 16) == 15)
		_putchar('f');
	if (n && j && (n % 16) == 14)
		_putchar('e');
	if (n && j && (n % 16) == 13)
		_putchar('d');
	if (n && j && (n % 16) == 12)
		_putchar('c');
	if (n && j && (n % 16) == 11)
		_putchar('b');
	if (n && j && (n % 16) == 10)
		_putchar('a');
	if (n && j && (n % 16) < 10)
		_putchar((n % 16) + '0');

	if (!j)
		_putchar('0');

	return (i);
}
/**
 * sbhex - converts integer to 2 digit hex
 * @n: unsigned int
 * Return: number ofdigits
 */
int sbhex(unsigned int n)
{
	int i = 1;
	static int j;

	if (j > 1)
		return (0);

	if (n > 0)
	{
		j++;
		i = (1 + sbhex(n / 16));
	}
	if (!j)
	{
		_putchar('0');
		i++;
	}
	else if (n && j && (n % 16) == 15)
		_putchar('F');
	else if (n && j && (n % 16) == 14)
		_putchar('E');
	else if (n && j && (n % 16) == 13)
		_putchar('D');
	else if (n && j && (n % 16) == 12)
		_putchar('C');
	else if (n && j && (n % 16) == 11)
		_putchar('B');
	else if (n && j && (n % 16) == 10)
		_putchar('A');
	else if ((n % 16) < 10)
		_putchar((n % 16) + '0');

	return (i);
}
