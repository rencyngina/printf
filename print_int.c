#include "main.h"
/**
 * count_num - counts digits of an int
 * @i: integer
 * Return: number of digits
 */
int count_num(int i)
{
	unsigned int k = 0, l;

	if (i < 0)
		l = i * -1;
	else
		l = i;
	while (l != 0)
	{
		l /= 10;
		k++;
	}
	if (i <= 0)
		k++;
	return (k);
}
/**
 * print_number - prints integer using putchar only
 * @n: integer
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
		print_number(i / 10);

	_putchar(i % 10 + '0');
}
/**
 * print_int - prints number and returns amount of digits
 * @m: va_list  form printf
 * Return: number of digits
 */
int print_int(va_list m)
{
	int j = va_arg(m, int);
	int d = count_num(j);

	print_number(j);
	return (d);
}
