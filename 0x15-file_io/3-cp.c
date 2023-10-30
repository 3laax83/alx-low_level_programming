#include "main.h"

void ioCheck(int status, int file, char *filename, char mode)
{
	if (status == -1)
	{
		if (mode == 'C')
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
			exit(100);
		}

		if (mode == 'O')
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
			exit(98);
		}
		if (mode == 'W')
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
			exit(99);
		}
	}
}


int main(int argc, char *argv[])
{
	int source, des, bufsize = 1024, written, closesource, closedes;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}

	source = open(argv[1], O_RDONLY);
	ioCheck(source, -1, argv[1], 'O');
	des = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	ioCheck(des, -1, argv[2], 'W');

	while (bufsize == 1024)
	{
		bufsize = read(source, buf, sizeof(buf));
		if (bufsize == -1)
			ioCheck(-1, -1, argv[1], 'O');
		written = write(des, buf, bufsize);
		if (written == -1)
			ioCheck(-1, -1, argv[2], 'W');
	}

	closesource = close(source);
	ioCheck(closesource, source, NULL, 'C');
	closedes = close(des);
	ioCheck(closedes, des, NULL, 'C');
	return (0);
}
