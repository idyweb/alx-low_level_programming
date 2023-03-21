#include <stdio.h>
/**
 * main - prints all possible combinations of single digits
 *
 * Return: (0) Success
 */
int main(void)

{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
