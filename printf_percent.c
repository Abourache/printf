#include "main.h"

/**
 * printpercent - prints %
 * @format: format
 * @pa: va_list
 * Return: number of characters printed
 */
int printf_percent(char *format, va_list ar)
{
	(void)format;
	(void)ar;
	_putchar('%');
	return (1);
}
