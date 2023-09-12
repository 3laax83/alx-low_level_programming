#include <stdio.h>
#include <stdlib.h>
/**
 * fibonacci - prints Fibonacci numbers
 *
 * Description: prints the first 50
 * Fibonacci numbers, starting with 1
 * and 2.
 *
 * Return: None.
 */
void fibonacci(int num)
{
	int num1, num2, placeholder, counter;
	counter = 0;
	num1 = 1;
	num2 = 2;

	printf("1, 2, ");
	while (counter <= num)
	{
	printf("%d, ", num1 + num2);
	placeholder = num2;
	num2 = num1 + num2;
	num1 = placeholder;
	}
}
/**
 * main - main
 *
 * Return: 0.
 */
int main(void)
{
	fibonacci(50);
	return (0);
}
