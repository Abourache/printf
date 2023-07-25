#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_char - writes the character c to stdout
 * @car: The character to print
 *
 * Return: 1.
 */
int print_char(va_list car)
{
	unsigned char r;

	r = va_arg(car, int);
	_putchar(r);
	return (1);
}
/**
 * print_porcente - function writes %
 *
 * Return: 1.
 */
int print_porcente(void)
{
	_putchar('%');
	return (1);
}
