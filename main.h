#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int count_num(int i);
void print_number(int n);
int print_int(va_list);
int _strlen(char *s);
int print_string(va_list);
int bbinary(unsigned int n);
int ppercent(va_list m);
char *base(unsigned int n, int b);
void rev_string(char *s);
/**
 * struct printfunc - print functions
 *
 * @cs: conversion specifiers
 * @f: The function associated
 */
typedef struct printfunc
{
	char cs;
	int (*f)(va_list ap);
} pf;

int (*get_specifier(char s))(va_list);
int print_char(va_list m);
int pbinary(va_list m);
#endif
