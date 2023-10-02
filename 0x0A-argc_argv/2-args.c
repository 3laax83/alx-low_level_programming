#include <stdio.h>

/**
 * main - main function.
 * @argc: number of arguments.
 * @argv: pointer to arguments.
 * Description: a program that prints all arguments it receives.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; ++i)
		printf("%s\n", argv[i]);
	return (0);
}
