#include <stdio.h>
#include <stdlib.h>
/**
 * summation - gives a summation
 *
 * Description: computes and prints the sum of
 * all the multiples of 3 or 5 below 1024
 * 1024 excluded.
 *
 * Return: None.
 */
void summation(void)
{
	int num, sum = 0;

	for (num = 0; num < 1024; ++num)
	{
	if (num % 3 == 0 || num % 5 == 0)
	sum += num;
	}
	printf("%d\n", sum);
}
/**
 * main - main
 *
 *
 * Return: 0.
 */
int main(void)
{
	summation();
	return (0);
}
