#include "main.h"
#include <stdio.h>
/**
 * _isupper - a program that checks if character is upper
 * @c: charater to check
 * Return: 1 if upper else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
