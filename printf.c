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
	int i = 0, charactercount = 0;
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
		for ( ;format[i] == '%'; i = i + 2)
		{
			if (format[i + 1] == 's')
				charactercount += print_string(va_arg(print, char *));
			else if (format[i + 1] == 'c')
				charactercount += _putchar(va_arg(print, int));
			else if (format[i + 1] == '%')
				charactercount += _putchar('%');
			else if (format[i + 1] == 'd' || format[i + 1] == 'i')
				charactercount += print_int(va_arg(print, int));
			else if (format[i + 1] == ' ' && !format[i + 2])
				return (-1);
			else if (format[i + 1] || format[i - 1])
			{
				charactercount += _putchar(format[i]);
				charactercount += _putchar(format[i + 1]);
			}
		}

	}
	va_end(print);
	return (charactercount);
}
