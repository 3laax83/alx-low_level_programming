#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it to the
 * POSIX standard output.
 * @filename: self-explanatory
 * @letters: self-explanatory
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t wr, rd;
	char *buf = malloc(letters);

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	if (!buf)
	{
		close(file);
		return(0);
	}

	rd = read(fd, buf, letters);
	close(file);

	if (rd == -1)
	{
		free(buf);
		return (0);
	}

	wr = write(1, buf, rd);
	free(buf);
	if (rd != wr)
		return (0);
	return (wr);
}
