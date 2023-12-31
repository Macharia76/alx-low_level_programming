#include "main.h"
/**
  * print_ch - This function prints a char to std output
  * @args: This is the list of arguments
  * @len: This is the length of string so far
  *
  * Return: The new length of the string
  */
int print_ch(va_list args, int len)
{
	char c = va_arg(args, int);

	len += _putchar(c);
	return (len);
}


/**
  * print_str - Prints a string to std output
  * @args: List of arguments
  * @len: Length of string so far
  *
  * Return: The new length of the string
  */
int print_str(va_list args, int len)
{
	const char *str = va_arg(args, const char *);

	if (str == NULL)
		str = "(null)";
	while (*str)
		len += _putchar(*str++);

	return (len);
}

