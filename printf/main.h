#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>

/**
  *struct directives - This holds fromat specifiers and their functions.
  *@spec: This is a char.
  *@fspec: The function pointer.
  *
  */
typedef struct directives
{
	char spec;
	int (*fspec)(va_list, int);
} forms;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_print_func(char c))(va_list, int);
int print_ch(va_list, int);
int print_str(va_list, int);
int print_int(va_list, int);
int _putchar_int(int, int);
int print_numbers(unsigned long n, unsigned int base, const char *digits);
unsigned int find_length(unsigned int, int);
int print_hex(va_list args, int len);
int print_heX(va_list args, int len);
int print_unsignd(va_list args, int len);
int print_octal(va_list args, int len);
int print_rot13(va_list args, int len);
int print_b(va_list args, int len);
int print_binary(unsigned int, int);
int print_Str(va_list args, int len);

#endif

