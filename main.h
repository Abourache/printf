#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>


#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list car);
int print_string(va_list string);
int print_int(va_list integer);
int print_dec(va_list dec);
int print_rev(va_list rev);
int print_bin(va_list b);
int print_unsiged(va_list unsig);
int print_octal(va_list octal);
int print_a(va_list a);
int print_A(va_list A);
int print_rot13(va_list st);
int print_porcente(void);
int print_hex(unsigned int unsig, unsigned int lu);
/**
  * struct code_format - Struct format
  *
  * @sc: The specifiers
  * @f: The function associated
  */
typedef struct code_format
{
	char *sc;
	int (*f)(va_list);
} code_f;

/**
  * struct structprint - Struct format
  * @q: The specifiers
  * @u: The function associated
  */
typedef struct structprint
{
	char *q;
	int (*u)(char *format, va_list);
} structype;

#endif
