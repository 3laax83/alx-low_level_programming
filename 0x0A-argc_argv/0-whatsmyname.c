#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function.
 * Description: a program to write its name.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	for (; *argv; argv++)
		printf("%s", argv);
	printf("\n");
	return (0);
}
