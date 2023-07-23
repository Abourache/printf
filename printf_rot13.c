#include "main.h"
#include <stdio.h>
/**
  * print_rot13 - encodes a string into rot13.
  * @st: string to convert
  * Return: size the output text
  */
int print_rot13(va_list st)
{
	int y, x, count = 0;
	char *n;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLM nopqrstuvwxyzabcdefghijklm";

	n = va_arg(st, char *);
	if (n == NULL)
		n = "(null)";
	for (y = 0; n[y] != '\0'; y++)
	{
		for (x = 0; input[x] != '\0'; x++)
		{
			if (n[y] == input[x])
			{
				_putchar(output[x]);
				count++;
				break;
			}
		}
	}
	return (count);
}
