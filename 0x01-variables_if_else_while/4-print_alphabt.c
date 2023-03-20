#include <stdio.h>
/**
 * main - program that prints all the alphabet except e and q.
 * Return: (0)
 **/
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		if (alphabet != 'e' && != 'q')
		{
			putchar(alphabet);
		}
	putchar('\n');
	return (0);
}
