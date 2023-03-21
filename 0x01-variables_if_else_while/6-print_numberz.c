#include <stdio.h>
/**
 * main - function that prints all single digits.
 * Return: (0) as success
 *
 */
int main(void)

{
	int x;

	for (x = '0'; x <= 9; x++)
		putchar(x + '0');
	putchar('\n');
	return (0);
}
