#include "main.h"

/**
 * main - main function
 *
 * Description: a program that generates
 * random valid passwords for the program
 * 101-crackme.
 *
 * Return: Always 0.
 */

int main(void)
{
	int password[32], counter1, counter2, sum = 0;

	srand(time(NULL));
	for (counter1 = 0; counter1 < 32; ++counter1)
	{
		password[counter1] = rand() % 78;
		sum += password[counter1] + '0';
		putchar(password[counter1] + '0');

		if ((2772 - sum) - '0' < 78)
		{
			counter2 = 2772 - sum - '0';
			sum += counter2;
			putchar (counter2 + '0');
			break;
		}
	}
	return (0);
}
