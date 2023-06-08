#include "main.h"

/**
 * prime22 - makes possible to evaluate from 1 to n
 * @a: integer
 * @b: number to iterates from 1 to n
 *
 * Return: 0
 */
int prime22(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime22(a, b + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: number integer
 *
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime22(n, 2));
}
