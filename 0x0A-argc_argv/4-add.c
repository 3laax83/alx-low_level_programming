#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - main function.
 * @argc: # arguments.
 * @argv: -> arguments.
 * Description: a program that adds positive numbers.
 * Return: 0 if success, 1 if not.
 */

int main(int argc, char **argv)
{
	int i = 1, j, result = 0;
	char *letter;

	if (argc == 0)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		letter = argv[i];
		j = 0;
		while (letter[j] != '\0' && j++)
		{
			if (!isdigit(letter[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
		i++;
	}
	printf("%d\n", result);
	return (0);
}
