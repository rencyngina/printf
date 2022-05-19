#include "main.h"
#include <stddef.h>
/**
 * _strlen - returns the length of a string
 * @s: char type string
 * Return: string length
 */
int print_string(char *str)
{
	int a;
	int z;

	if (!str)
	{
		str = "(null)";
	}
	a = strlen(str);
	for (z = 0; str[z] != '\0'; z++)
		_putchar(str[z]);
	return (a);
