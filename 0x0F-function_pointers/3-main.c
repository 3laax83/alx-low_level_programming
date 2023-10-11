#include "3-calc.h"

/**
 * main - a program that performs simple operations.
 * @argc: number of arguments
 * @argv: pointer to list of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*opr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (!(num2 == 0 && (argv[2][0] == '/' || argv[2][0] == '%')))
		opr = get_op_func(argv[2]);

	if (opr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", opr(num1, num2));
	return (0);
}
