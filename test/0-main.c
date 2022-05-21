#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	char *k = NULL;
	unsigned int ui;

	len = _printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("Length:[%d, %i]\n", len2, len);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !kk");
	printf("String:[%s]\n", "I am a string !kk");
	_printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");

	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);

	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	len = _printf("%s", k);
	    printf("\n");
	      len2 =  printf("%s", k);
	        printf("\n");
		  printf("%i, %d\n",  len, len2);
	len =_printf("%b\n", 27);

	_printf("Length:[%i]\n", len);
	len =  _printf("%b\n", 0);
	_printf("Length:[%i]\n", len);
	len = _printf("%s %% y ", "duba");
	    printf("\n");
	      len2 =  printf("%s %% y ", "duba");
	        printf("\n");
		  printf("%i, %d\n",  len, len2);
	
	len = _printf("Unsigned:[%u]\n", ui);
	len2 = printf("Unsigned:[%u]\n", ui);
	printf("Length:[%d, %i]\n", len2, len);
	len =  _printf("Unsigned octal:[%o]\n", UINT_MAX + 1024);
	len2 = printf("Unsigned octal:[%o]\n", UINT_MAX +  1024);
	printf("Length:[%d, %i]\n", len2, len);
	len = _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	len2 = printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Length:[%d, %i]\n", len2, len);
	len = _printf("%S\n", "\tBest\rSchool\v");
	printf("%i\n", len);
	return (0);
}
