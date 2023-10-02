#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - main function.
 * @argc: # arguments.
 * @argv: -> arguments. 
 * Description: a program that adds positive numbers.
 * Result: 0 if success, 1 if not.
 */

int main(int argc, char **argv)
{
	int i, j, result = 0;
	char *letter;
		
	for (i = 0; i < argc; i++)
	{
		j = 0;
		letter = argv[i];
		while (letter[j] != '\0' && j++)
		{
			if (!isdigit(letter[j]))
			{
				printf("Error\n");
				return(1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
