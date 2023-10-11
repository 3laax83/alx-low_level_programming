#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the opcodes of its own main function.
 * @argc: number of arguments.
 * @argv: pointer to arguments.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i, bytes;
	int (*adr)(int, char **);
	char opcode;

	if (argc != 2)
		printf("Error\n"), exit(1);
	
	bytes = atoi(argv[1]);

	if (argv[1] < 0)
		printf("Error\n"), exit(2);

	for (i = 0; i < bytes; i++, adr++)
	{
		opcode = *(char *)adr;
		printf("%.2x", opcode);
		if (i == (bytes - 1))
			continue;
		printf(" ");
	}

	printf("\n");
	return (0);
}
