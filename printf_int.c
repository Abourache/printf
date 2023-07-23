#include "main.h"
/**
* print_int - function that prints an integer
* @integer: integer to print
* Descriptions: prints digit with _putchar
* Return: size the output text
*/
int print_int(va_list integer)
{
	int length, p, j, dig, x, num;
	int count = 0;

	x = va_arg(integer, int);
	if (x != 0)
	{
		if (x < 0)
		{
			_putchar('-');
			count++;
		}
		num = x;
		length = 0;
		while (num != 0)
		{
			num /= 10;
			length++;
		}
		p = 1;
		for (j = 1; j <= length - 1; j++)
			p *= 10;
		for (j = 1; j <= length; j++)
		{
			dig = x / p;
			if (x < 0)
				_putchar((dig * -1) + 48);
			else
				_putchar(dig + '0');
			count++;
			x -= dig * p;
			p /= 10;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
