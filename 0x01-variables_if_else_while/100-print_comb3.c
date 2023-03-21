#include <stdio.h>
/**
 * main - prints all posssible combination of two digits.
 *
 * Return: (0) Success
 */
int main(void)

{
	int x, j;

	for (x = 0; x < 100; x++)
	{
		j = x / 10 + 48;
		if (j < i % 10 + 48)
		{
			putchar(j);
			putchar(x % 10 + 48);
			if (x != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
