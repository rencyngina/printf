#include "main.h"
#include <stdlib.h>
/**
 * rev_string - reverses a string
 * @s: char type pointer
 */
void rev_string(char *s)
{
	int i = 0, j, l = 0;
	char k;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	j = i;
	while (l <= j / 2)
	{
		k = s[l];
		s[l] = s[i];
		s[i] = k;
		i--;
		l++;
	}
}
/**
 * base - returnsthe  baseof n
 * @n: unsigned int to be converted
 * @b: base
 * Return: a string containing the base
 */
char *base(unsigned int n, int b)
{
	char *ptr;
	int i = 0;

	ptr = malloc(_strlen("11111111111111111111111111111111") + 1);
	for (i = 0; i < (_strlen("11111111111111111111111111111111") + 1); i++)
		ptr[i] = '\0';
	ptr[0] = '0';
	i = 0;
	while (n != 0)
	{
		ptr[i] = ((n % b) + '0');
		i++;
		n /= b;
	}
	rev_string(ptr);
	return (ptr);
}
