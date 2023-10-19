#include "variadic_functions.h"
/**
 * print_strings - prints strings.
 * @seperator: string to be printed between the strings.
 * @x: number of strings passed to function.
 * Return: no return.
 */
void print_strings(const char *seperator, const unsigned int x, ...)
{
	va_list valist;
	unsigned int i;
	char *str;

	va_start(valist, x);

	for (i = 0; i < x; i++)
	{
		str = va_arg(valist, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < x - 1)
			if (seperator)
				printf("%s", seperator);
	}
	printf("\n");
	va_end(valist);
}
