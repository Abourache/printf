#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
* print_bin - convert to binary
* @biner: number in decinal
* Return: number of chars printed
*/
int print_bin(va_list biner)
{
	unsigned int j, dig, length, p, x, num;
	int count = 0;

	x = va_arg(biner, unsigned int);
	if (x != 0)
	{
		num = x;
		length = 0;
		while (num != 0)
		{
			num /= 2;
			length++;
		}
		p = 1;
		for (j = 1; j <= length - 1; j++)
      p *= 2;
		for (j = 1; j <= length; j++)
		{
			dig = x / p;
			_putchar(dig + '0');
			count++;
			x -= dig * p;
			p /= 2;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
