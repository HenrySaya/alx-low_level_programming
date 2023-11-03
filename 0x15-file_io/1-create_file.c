#include <"main.h"
/**
 * create_file - program creates a file
 *
 * @filename: name of the file
 * @text_content: text to be written in the file
 * Return: 1 if success.-1 if fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i, written;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (!text_content)
		text_content = "";

	for (i = 0; text_content[i]; i++)
		;

	written = write(fd, text_content, i);

	if (written < 0)
		return (-1);

	close(fd);

	return (1);
}
