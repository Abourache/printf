#include "main.h"
/**
* print_unsiged - function that prints unsigned number
* @unsig: unsigned number
* Descriptions: prints unsigned number with putchar
* Return: size the output
*/
int print_unsiged(va_list unsig)
{
	unsigned int length, j, dig, d, x, num;
	int count = 0;

	x = va_arg(unsig, unsigned int);
	if (x != 0)
	{
		num = x;
		length = 0;
		while (num != 0)
		{
			num /= 10;
			length++;
		}
		d = 1;
		for (j = 1; j <= length - 1; j++)
			d *= 10;
		for (j = 1; j <= length; j++)
		{
			dig = x / d;
			_putchar(dig + '0');
			count++;
			x -= dig * d;
			d /= 10;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
