#include "main.h"

/**
  * append_text_to_file - A function that appends text to end of a file
  * @filename: Name of file and text content is the NULL
  * @text_content: The string  to write to file
  *
  * Return: 1 on success -1 on failure
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t len = 0;
	ssize_t check = 0;

	if (filename == NULL)
		return (-1);

	/*Find length of content*/
	while (text_content[len])
		len++;

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		check = write(fd, text_content, len);

	if (check == -1)
		return (-1);

	close(fd);
	return (1);
}

