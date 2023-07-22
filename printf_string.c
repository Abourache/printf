#include "main.h"
/**
 * printf_string - print a string.
 * @arg: argumen t.
 * Return: the length of the string.
 */

int printf_string(va_list arg)
{
	int i, length;
	char *p;

	p = va_arg(arg, char *);
	if (p == NULL)
	{
		p = "(null)";
		length = _strlen(p);
		for (i = 0; i < length; i++)
			_putchar(p[i]);
		return (length);
	}
	else
	{
		length = _strlen(p);
		for (i = 0; i < length; i++)
			_putchar(p[i]);
		return (length);
	}
}
