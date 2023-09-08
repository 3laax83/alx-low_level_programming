#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that prints all possible combinations of single-digit numbers
 *
 * Description: Numbers must be separated by , followed by a space
 * Numbers should be printed in ascending order
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	for(num = 48; num <= 57; ++num)
	{
		putchar(num);
		if (num < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
