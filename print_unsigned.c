#include "main.h"
/**
 * count_unsigned_num - counts digits of an int
 * @i: integer
 * Return: number of digits
 */
int count_unsigned_num(unsigned int i)
{
	unsigned int k = 0, l;

	l = i;
	while (l != 0)
	{
		l /= 10;
		k++;
	}
	if (!i)
		k++;
	return (k);
}
/**
 * print_unsigned_number - prints integer using putchar only
 * @n: integer
 */
void print_unsigned_number(unsigned int n)
{
	unsigned int i = n;

	if (i / 10)
		print_number(i / 10);

	_putchar(i % 10 + '0');
}
/**
 * print_unsigned_int - prints number and returns amount of digits
 * @m: va_list  form printf
 * Return: number of digits
 */
int print_unsigned_int(va_list m)
{
	unsigned int j = va_arg(m, unsigned int);
	int d = count_unsigned_num(j);

	print_unsigned_number(j);
	return (d);
}
