#include "main.h"

/**
 * create_file - opening a file and writing the content.
 * @filename: the name the file is refered to.
 * @text_content: the contents of the file to write.
 * Return: int - 1 for success -1 for fail.
 */
int create_file(const char *filename, char *text_content)
{
	char *buffer;
	int fd, state, i;

	fd = 0;
	state = -1;
	i = 0;
	while (text_content[i] != '\0')
		i = i + 1;

	buffer = malloc(sizeof(char) * i);
	if (buffer == NULL)
		return (state);

	if (filename != NULL)
	{
		fd = open(filename, O_RDWR | O_CREAT, 0600);
		if (fd == -1)
			return (state);

		write(fd, buffer, i);

		free(buffer);
		close(fd);
		state = 1;
		return (state);
	}

	return (state);
}
