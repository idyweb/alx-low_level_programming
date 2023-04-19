#include <unistd.h>

/**
 * _putchar - prints the charcter a to stdout
 * @a: the charaxcter to print
 *
 * Return: 0
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
