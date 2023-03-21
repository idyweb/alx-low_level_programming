#include <stdio.h>
/**
 * * main - fuction to print alphabet in reverse.
 * Return: (0) as success
 */
int main(void)

{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);

	putchar('\n');

	return (0);
}
