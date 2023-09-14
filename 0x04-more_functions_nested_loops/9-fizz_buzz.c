#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * Description: print numbers from
 * 1 to 100 but for multiples of three
 * print Fizz and for the multiples of
 * five print Buzz. For numbers which
 * are multiples of both three and five
 * print FizzBuzz.
 *
 * Return: Always 0.
 */

int main(void)
{
	int counter;

	for (counter = 1; counter <= 100; ++counter)
	{
		if (counter % 3 == 0 || counter % 5 == 0)
		{
			if (counter % 3 == 0)
				printf("Fizz");
			if (counter % 5 == 0)
				printf("Buzz");
		}
		else
			printf("%d", counter);
		if counter < 100
			printf(" ");
	}
	printf("\n");
	return (0);
}
