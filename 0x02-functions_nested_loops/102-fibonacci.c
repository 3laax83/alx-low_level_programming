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
	long int num1, num2, placeholder;
	num1 = 1;
	num2 = 2;

	printf("1, 2, ");
	while (num > 2)
	{
	printf("%ld", num1 + num2);
	if (num > 3)
	printf(", ");
	placeholder = num2;
	num2 = num1 + num2;
	num1 = placeholder;
	--num;
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
