#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character to stdout
 * @c: character to print
 * Return: 1(number of character printed)
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
