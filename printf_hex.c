#include "main.h"
/**
* print_hex - function that prints an unsigned int in hexadecimal
* @unsig: unsigned to be printed
* @lu: case of printing (0 = lower, 1 = upper)
* Descriptions: prints unsigned in hexadecimal with _putchar
* Return: size the output
*/
int print_hex(unsigned int unsig, unsigned int lu)
{
	unsigned int length, p, j, dig, num;
	int count = 0;
	char diff;

	if (unsig != 0)
	{
		num = unsig;
		length = 0;
		if (lu)
			diff = 'A' - ':';
		else
			diff = 'a' - ':';
		while (num != 0)
		{
			num /= 16;
			length++;
		}
		p = 1;
		for (j = 1; j <= length - 1; j++)
			p *= 16;
		for (j = 1; j <= length; j++)
		{
			dig = unsig / p;
			if (dig < 10)
				_putchar(dig + '0');
			else
				_putchar(dig + '0' + diff);
			count++;
			unsig -= dig * p;
			p /= 16;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
/**
* print_a - takes an unsigned int an prints it in lowercase hex
* @a: unsigned int to print
* Descriptions: prints in lowercase hex with _putchar
* Return: size of the output
*/
int print_a(va_list a)
{
	return (print_hex(va_arg(a, unsigned int), 0));
}
/**
* print_A - takes an unsigned int an prints it in uppercase hex
* @A: unsigned int to print
* Descriptions: prints in uppercase hex with _putchar
* Return: size of the output
*/
int print_A(va_list A)
{
	return (print_hex(va_arg(A, unsigned int), 1));
}
