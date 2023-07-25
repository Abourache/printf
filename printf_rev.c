#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
*print_rev - prints astring in reverse
*@rev: string to print
*Return: number of chars printed
*/
int print_rev(va_list rev)
{
	int i, j = 0;
	char *ptr;

	ptr = va_arg(rev, char *);
	if (ptr == NULL)
		ptr = ")llun(";
	for (i = 0; ptr[i] != '\0'; i++)
		;
	for (i -= 1 ; i >= 0; i--)
	{
		_putchar(ptr[i]);
		j++;
	}
	return (j);
}
