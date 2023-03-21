#include <stdio.h>
/**
 * main - function that prints all single digits.
 * Return: (0) as success
 *
 */
int main(void)

{
	int x;

	for (x = '0'; x < 10; x++)
		putchar('0' + x);
	putchar("\n");
	return (0);
}
