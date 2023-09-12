#include <stdio.h>
#include <stdlib.h>
#define LARGEST 10000000000
/**
 * fibonacci - prints Fibonacci numbers
 * @num: number
 *
 * Description: prints the first 50
 * Fibonacci numbers, starting with 1
 * and 2.
 *
 * Return: None.
 */
void fibonacci(unsigned long num)
{
	unsigned long num1 = 1, num2 = 2, counter, num1h1, num1h2, num2h1, num2h2, half1, half2;

	printf("1, 2, ");
	for (counter = 2; counter < 92; ++counter)
	{
	printf("%lu, ", num1 + num2);
	num2 = num2 + num1;
	num1 = num2 - num1;
	}
	num1h1 = num1 / 100000000;
	num2h1 = num2 / 100000000;
	num1h2 = num1 % 100000000;
	num2h2 = num2 % 100000000;
	for (counter = 93; counter <= 98; ++counter)
	{
	half1 = num1h1 + num2h1;
	half2 = num1h2 + num2h2;
	if (half2 >= 100000000)
	{
	++half1;
	half2 = half2 % 100000000;
	}
	printf("%lu%lu", half1, half2);
	if (counter != 98)
	printf(", ");
	num1h1 = num2h1;
	num1h2 = num2h2;
	num2h1 = half1;
	num2h2 = half2;
	}
	printf("\n");
}
/**
 * main - main
 *
 * Return: 0.
 */
int main(void)
{
	fibonacci(98);
	return (0);
}
