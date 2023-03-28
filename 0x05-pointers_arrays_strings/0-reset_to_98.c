#include "main.h"

/**
 * main - function that takes a pointer to an int
 * as parameter and updates the value it points
 * to 98.
 *
 * Return: Always 0.
 */

int main(void)

{
	int n;
	int *p;

	n = 402;
	p = &n;
	*p = 98;
	reset_to_98(&n);

	return (0);
}
