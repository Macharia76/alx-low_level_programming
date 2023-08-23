#include <unistd.h>
/**
  *_putchar - This function will write to stdout.
  *@c: This represents the character to be written.
  *
  *Return: It returns the number of chars written.
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

