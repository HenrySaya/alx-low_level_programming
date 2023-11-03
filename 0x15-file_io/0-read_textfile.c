#include "main.h"
/**
 * read_textfile - read and print textfile to the POSIX stdo
 *
 * @filename: name of the file
 * @letters: number of letters in the file
 * Return: the count of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rlen, wlen;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, o_RDONLY);
	if (fd < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	rlen = read(fd, buffer, letters);
	close(fd);
	if (rlen < 0)
	{
		free(buffer);
		return (0);
	}

	wlen = write(STDOUT_FILENO, beffer, rlen);
	free(buffer);
	if (rlen != wlen)
		return (0);

	return (wlen);
}
