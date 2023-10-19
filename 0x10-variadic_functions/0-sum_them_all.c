#include "variadic_functions.h"

/**
 ** sum_them_all - returns the sum of all its parameters.
 ** @x: amount of the arguments.
 **
 ** Return: sum of its parameters.
 **/
int sum_them_all(const unsigned int x, ...)
{
	va_list valist;
	unsigned int i;
	int sum = 0;

	if (x == 0)
		return (0);

	va_start(valist, x);

	for (i = 0; i < x; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
