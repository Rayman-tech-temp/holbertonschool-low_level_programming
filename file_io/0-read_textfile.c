#include "main.h"

/**
 * read_textfile -
 * @filename: a char array index to start the read process
 * @letters: how many characters to print.
 * Return: ssize_t - a signed integer (-1, to SSIZE_MAX).
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd, count;

	fd = 0;
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	if (filename != NULL)
	{
		fd = open(filename, O_RDONLY);
		count = read(fd, buffer, letters);
		count = write(1, buffer, count);
		close(fd);
		return (count);
	} else
		return (0);
}
