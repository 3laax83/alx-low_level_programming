#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: number of arguments
 * @argv: pointer to arguments.
 * Description: a program that multiplies two numbers.
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	if (argc - 1 == 2)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
