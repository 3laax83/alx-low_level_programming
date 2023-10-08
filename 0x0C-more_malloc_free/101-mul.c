#include "main.h"

/**
 * multiply - function to multiply 2 strings.
 * @str1: pointer to 1st string.
 * @str2: pointer to 2nd string.
 * Return: product of multiplication.
 */

char *multiply(char *str1, char *str2)
{
	char *split;
	int a, b, c, x;
	int len1 = strlen(str1), len2 = strlen(str2);

	split = malloc(a = x = len1 + len2);
	if (split == NULL)
		printf("Error\n"), exit(98);

	while (a--)
		split[a] = 0;

	for (len1--; len1 >= 0; len1--)
	{
		if (!isdigit(str1[len1]))
		{
			free(split);
			printf("Error\n"), exit(98);
		}
		a = str1[len1] - '0';
		c = 0;
		for (len2 = strlen(str2) - 1; len2 >= 0; len2--)
		{
			if (!isdigit(str2[len2]))
			{
				free(split);
				printf("Error\n"), exit(98);
			}
			b = str2[len2] - '0';

			c += split[len1 + len2 + 1] + (a * b);
			split[len1 + len2 + 1] = c % 10;

			c /= 10;
		}
		if (c)
			split[len1 + len2 + 1] += c;
	}
	return (split);
}

/**
 * main -  a program that multiplies two positive numbers.
 * @argc: number of arguments.
 * @argv: pointer to list of arguments.
 * Return: always 0.
 */
int main(int argc, char **argv)
{
	char *split;
	int a = 0, b = 0, x;

	if (argc != 3)
	{
		printf("Error\n"), exit(98);
	}
	x = strlen(argv[1]) + strlen(argv[2]);

	split = multiply(argv[1], argv[2]);

	while (b < x)
	{
		if (split[b])
			a = 1;
		if (a)
			_putchar(split[b] + '0');
		b++;
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(split);
	return (0);

}
