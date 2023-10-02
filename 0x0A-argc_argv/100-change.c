#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - main function.
 * @argc: # arguments.
 * @argv: -> arguments.
 * Description: a program that prints the minimum number of
 * coins to make change for an amount of money.
 * Return: 0 is success, 1 if not.
 */


int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int result = 0, div;
	int number;
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		number = atoi(argv[1]);
		if (number < 0)
		{
			printf("0\n");
			return (1);
		}
		for (i = 0; i < 5; i++)
		{
			div = number / coins[i];
			if (div > 0)
			{
				result += div;
				number -= div * coins[i];
			}
		}
		printf("%d\n", result);
		return (0);
	}
}
