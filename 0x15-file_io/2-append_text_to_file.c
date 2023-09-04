#include "main.h"

/**
  * append_text_to_file - A function that appends text to end of a file
  * @filename: Name of file and text content is the NULL
  * @text_content: The string  to write to file
  *
  * Return: 1 on success -1 on failure, NULL
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int op;
	int len = 0;
	int wr;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
	for (len = 0; text_content[len];)
		len++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, len);
	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}

