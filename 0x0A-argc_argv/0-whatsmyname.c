#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function.
 * Description: a program to write its name.
 * Return: Always 0.
 */

void main(char *argv[])
{
	int i;

	for (i = 0; i < argc; ++i)
		printf("%s", argv[i]);
	printf("\n");
}
