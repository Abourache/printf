#include "main.h"
/**
* print_octal - unsigned int argument is converted to unsigned octal
* @octal: unsigned to be converted
* Descriptions: prints unsigned octal
* Return: size the output
*/
int print_octal(va_list octal)
{
	unsigned int length, p, j, dig, x, num;
	int count = 0;

	x = va_arg(octal, unsigned int);
	if (x != 0)
	{
		num = x;
		length = 0;
		while (num != 0)
		{
			num /= 8;
			length++;
		}
		p = 1;
		for (j = 1; j <= length - 1; j++)
			p *= 8;
		for (j = 1; j <= length; j++)
		{
			dig = x / p;
			_putchar(dig + '0');
			count++;
			x -= dig * p;
			p /= 8;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
