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
 * @str: string
 * Return: length of  string
 */
int print_string(char *str)
{
	int a;
	int z;
	char *_null = "(null)";

	if (!str)
	{
		for (z = 0; _null[z] != '\0';  z++)
			_putchar(_null[z]);
		return (7);
	}
	a = _strlen(str);
	for (z = 0; str[z] != '\0'; z++)
		_putchar(str[z]);
	return (a);
}
