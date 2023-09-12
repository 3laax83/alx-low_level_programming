#include <stdio.h>
#include <stdlib.h>
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
void fibonacci(void)
{
	long int num1, sum, num2, placeholder;

	num1 = 1;
	sum = num1;
	num2 = 2;
	while (num2 <= 4000000)
	{
	sum += num2;
	placeholder = num2;
	num2 = num1 + num2;
	num1 = placeholder;
	}
	printf("%ld\n", (sum + 1)/2);
}
/**
 * main - main
 *
 * Return: 0.
 */
int main(void)
{
	fibonacci();
	return (0);
}
