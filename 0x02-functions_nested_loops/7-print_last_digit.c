#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the
 * last digit of a number.
 * @num: number
 *
 * Description : prints the last
 * digit of a number.
 *
 * Return : the value of the last
 * digit
 */
int print_last_digit(int num)
{
	int rtrn = num%10;
	_putchar(rtrn);
	return (rtrn);
}
