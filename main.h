#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int _printf(const char *format, ...);
int count_num(int i);
void print_number(int n);
int print_int(int j);
int _strlen(char *s);
int print_string(char *str);
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
