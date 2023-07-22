#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>


int _printf(const char *format, ...);
int _putchar(char c);
int printf_char(va_list arg);
int printf_percent(char *format, va_list ar);
int _strlenc(const char *s);
int _strlen(char *s);
int printf_string(va_list arg);

#endif
