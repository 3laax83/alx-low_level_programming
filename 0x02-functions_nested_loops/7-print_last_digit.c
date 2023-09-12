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
	_putchar(num%10 + '0');
	return (num%10);
}
