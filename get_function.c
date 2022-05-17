#include "main.h"
/**
 * get_p_func - elects correct operation for printing
 * @csi: conversion specifier
 * Return: pointer to the correct function
 */
int (*get_p_func(char *csi))(char *)
{
	pf pfs[] = {
		{"s", print_string},
		{NULL, NULL}
	};
	int i = 0;

	while (i <  2)
	{
		if (pfs[i].cs[0] == csi[0])
			return (pfs[i].f);
		i++;
	}
	return (NULL);
}
