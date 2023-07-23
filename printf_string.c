#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_string - writes the character c to stdout
 * @string: The string to print
 *
 * Return: 1.
 */
int print_string(va_list string)
{
	char *str;
	int  i = 0;

	str = va_arg(string, char *);
	if (str == NULL)
		str = "(null)";
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
