#include "main.h"
#include <stddef.h>
/**
 * get_specifier - points to associated  function
 * @s: required conversion specifier
 * Return:apointer to thecorrectfunction
 */
int (*get_specifier(char s))(va_list)
{
	pf pfs[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_int},
		{'i', print_int},
		{'%', ppercent},
		{'b', pbinary}
	};
	int i  = 0;

	while (i < 6)
	{
		if (pfs[i].cs == s)
			return (pfs[i].f);
		i++;
	}
	return (NULL);
}
