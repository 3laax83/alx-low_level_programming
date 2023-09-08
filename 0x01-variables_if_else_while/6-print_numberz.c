#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -  program that prints all single
 * digit numbers of base 10 starting from 0
 *
 * Description: You are not allowed to use any variable of type char
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; ++num)
		putchar('0' + num);
	putchar('\n');
	return (0);
}
