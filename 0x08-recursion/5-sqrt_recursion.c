#include "main.h"

/**
 * sqrt - square root
 * @a: number
 * @b: number that iterates from 1 to n
 *
 * Return: 0;
 */
int sqrtm(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt(a, b + 1));
}

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: integer
 *
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	return (sqrtm(n, 1));
}
