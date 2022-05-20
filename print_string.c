#include "main.h"
#include <stddef.h>
/**
 * _strlen - returns the length of a string
 * @s: char type string
 * Return: string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s && s[i])
	{
		i++;
	}
	return (i);
}
/**
 * print_string - prints a string
 * @m: va_listfromprintf
 * Return: length of  string
 */
int print_string(va_list m)
{
	char *str;
	int a;
	int z;

	str = va_arg(m, char *);
	if (!str)
		str = "(null)";
	a = _strlen(str);
	for (z = 0; str[z] != '\0'; z++)
		_putchar(str[z]);
	return (a);
}
/**
 * print_char - prints acharacter
 * @m: va_list from printf
 * Return: 1
 */
int print_char(va_list m)
{
	_putchar(va_arg(m, int));
	return (1);
}
/**
 * ppercent - prints %
 * @m: va_list from printf
 * Return: 1
 */
int ppercent(va_list m)
{
	(void)m;
	return (_putchar('%'));
}
