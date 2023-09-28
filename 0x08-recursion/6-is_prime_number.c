#include "main.h"

/**
 * prime - to find if number is prime
 * @num1: integer.
 * @num2: integer.
 * Description: a function to store value of n.
 * Return: prime status of n
*/

int prime(int num1, int num2)
{
	if (num1 % num2 == 0 || num1 < num2)
		return (0);
	else if (num2 < num1 / 2)
		return (1);
	return (prime(num1, num2 + 1));
}


/**
 * is_prime_number- finds if n is prime.
 * @n: integer.
 * Description: a function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int is_prime_number(int n)
{
	return (prime(n, 2));
}
