#include "main.h"

/**
  * read_textfile - Reads a text file and prints it to the POSIX std output
  * @filename: This is a name of the file to read
  * @letters: This is the number of letters it should read and print
  *
  * Return: 0, if the file can not be opened or read
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, check, len = 0;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	check = read(fd, buff, letters);
	if (check == -1)
		return (0);

	len = write(STDOUT_FILENO, buff, check);
	close(fd);
	return (len);
}

