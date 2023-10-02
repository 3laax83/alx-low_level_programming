#include <stdio.h>

/**
 * main - main function
 * @argc: number of arguments.
 * @argv: pointer to arguments.
 * Description: a program to print the number of arguments.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	for (; *argv; argv++)
		;
	printf("%d\n", argc - 1);
	return (0);
}
