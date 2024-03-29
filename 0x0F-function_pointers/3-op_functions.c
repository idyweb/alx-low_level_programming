#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 ** op_add - Returns the sum of two numbers.
 ** @a: The first number.
 ** @b: The second number.
 ** Return: The sum of a and b.
 **/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of two num
 * @a: the first number
 * @b: the second num
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two nums
 * @a: the first number
 * @b: the second num
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 ** op_div - Returns the dividion of two numbers.
 ** @a: The first number.
 ** @b: The second number.
 ** Return: The quotient of a and b.
 **/

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of two nums
 * @a: first num
 * @b: second num
 * Return: the remainder of the division of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
