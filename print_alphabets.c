#include "main.h"
/**
 * print_string - prints strings
 * @str: char type pointer to  string
 * Return: 0
 */
int print_string(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (0);
}
