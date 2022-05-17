#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int _printf(const char *format, ...);
/**
 * printfunc - print functions
 *
 * @cs: conversion specifiers
 * @f: The function associated
 */
typedef struct printfunc
{
	char *cs;
	int (*f)(char *);
} pf;

#endif
