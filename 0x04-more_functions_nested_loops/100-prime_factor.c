#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * Description: a program that finds and prints
 * the largest prime factor of the number
 * 612852475143.
 *
 * Return: Always 0.
 */

int main(void)
{
	long int primary[5], number, max, counter, tobefactor;

	primary[0] = 2;
	tobefactor = 612852475143;
	max = 0;
	for (number = 3; number <= 100000000; number += 2)
	{
		if (tobefactor % number == 0)
		{
			for (counter = 0; counter <= max; ++counter)
			{
				if (number % primary[counter] == 0)
					break;
				else if (counter == max)
				{
					primary[max + 1] = number;
					++max;
				}
			}
		}
	}
	printf("%ld\n", primary[max]);
	return (0);
}
