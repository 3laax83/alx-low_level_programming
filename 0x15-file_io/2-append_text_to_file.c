#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: self-explanatory
 * @text_content: got repetitive
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, num, rw;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (num = 0; text_content[num]; num++)
			;
		rw = write(file, text_content, num);
		if (rw == -1)
			return (-1);
	}

	close(file);
	return (1);
}
