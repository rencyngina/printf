#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	int i = 0, j, m, charactercount = 0;
	const char f[] = "cs%dibuoXxS";
	va_list print;

	va_start(print, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	while (format &&  format[i])
	{
		if (format[i] != '%')
		{
			charactercount += _putchar(format[i]);
			i++;
		}
		for ( ; format[i] == '%'; i = i + 2)
		{
			if (format[i + 1] == ' ' && !format[i + 2])
				return (-1);
			m = charactercount;
			for (j = 0; f[j]; j++)
			{
				if (format[i + 1] == f[j])
					charactercount += get_specifier(format[i + 1])(print);
			}
			if (m == charactercount && (format[i + 1] || format[i - 1]))
			{
				charactercount += _putchar(format[i]);
				charactercount += _putchar(format[i + 1]);
			}
		}

	}
	va_end(print);
	return (charactercount);
}
