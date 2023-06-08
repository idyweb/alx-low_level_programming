#include <stdio.h>
#include "main.h"

/**
 * main - function that prints a string
 * @s: string
 * Return: 0
 */

char _puts_recursion(char s);


int main(void)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);

}

