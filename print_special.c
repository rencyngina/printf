#include "main.h"
/**
 * pbigs - prints non printable characters in hex
 * with other parts of string
 * @m: va_list from printf
 * Return: number of characters printed
 */
int pbigs(va_list m)
{
	char *s = va_arg(m, char *);
	int i, ccount = 0;

	if (!s)
		return (_puts("(null)"));
	for (i = 0; s[i]; i++)
	{
		if ((s[i] > 0 && s[i] < 32) || s[i] >= 127)
		{
			ccount += _puts("\\x");
			ccount += sbhex(s[i]);
		}
		else
			ccount += _putchar(s[i]);
	}
	return (ccount);
}
