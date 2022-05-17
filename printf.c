#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * _strlen - returns the length of a string
 * @s: char type string
 * Return: string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	int i = 0, charactercount = 0, length, j;
	char *str, k;
	va_list print;

	va_start(print, format);
	while (format &&  format[i])
	{
		if (format[i] != '%')
		{
			charactercount++;
			_putchar(format[i]);
			i++;
		}
		else if (format[i + 1] == 's')
		{
			str = va_arg(print, char *);
			length = _strlen(str);
			charactercount += length;
			for (j = 0; str[j] != '\0'; j++)
				_putchar(str[j]);
			i = i + 2;
		}
		else if (format[i + 1] == 'c')
		{
			charactercount++;
			k = va_arg(print, int);
			_putchar(k);
			i = i + 2;
		}
		else if (format[i + 1] == '%')
		{
			_putchar('%');
			i = i + 2;
		}
		else
			i = i + 1;
	}
	va_end(print);
	return (charactercount);
}
