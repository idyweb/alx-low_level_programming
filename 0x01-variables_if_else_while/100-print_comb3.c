#include <stdio.h>
/**
 * main - prints all posssible combination of two digits.
 *
 * Return: (0) Success
 */
int main(void)

{
	int x;

	for (x = 0; x < 100; x++)
	{
		j = x + 1;
		while (j < 100)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (x < 98)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
	}
	putchar('\n');

	return (0);
}
