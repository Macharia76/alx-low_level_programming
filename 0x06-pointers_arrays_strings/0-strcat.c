#include "main.h"
#include <string.h>

/**
 * _strcat - function that concatenates two strings
 * a typical implementation of strcat lib function
 * @dest: destination string pointer
 * @src: source string pointer
 * Return: pointer to the destination string
 */
char *_strcat(char *dest, char *src)
{
	/*
	 * make 'ptr' point to the end of the
	 * destination string
	 */
	char *ptr = dest + strlen(dest);
	/*
	 * appends characters of the src to the dest
	 */
	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	/*
	 * null terminate dest string
	 */
	*ptr = '\0';
	/*
	 * the dest is returned
	 */
	return (dest);
}

