#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenates two str
 * similar to strcat but uses at most n bytes
 * from src
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: integer, number of characters to append
 * from the src string
 * Return: pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}

