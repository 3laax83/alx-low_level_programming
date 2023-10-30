#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: self-explanatory
 * @text_content: content of file name
 * Return: 1 on success, -1 on failure (file can not be created, file
 * can not be written, write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
	int file, num, rw;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY| O_TRUNC, 600);

	if (file == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (num = 0; text_content[num]; num++)
		;

	rw = write(file, text_content, num);

	if (rw == -1)
		return (-1);

	close(file);
	return (1);
}
