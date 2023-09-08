#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a program that prints all single
 * digit numbers of base 10 starting from 0
 *
 * Description: a program that prints all single
 * digit numbers of base 10 starting from 0, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num;

	for (num = '0'; num <= '9'; ++num)
		putchar(num);
	putchar('\n');
	return (0);
}
