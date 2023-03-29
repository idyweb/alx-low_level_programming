#include "main.h"

/**
 * _strlen - function that returns length of string
 * @s: string to get length
 * Return: length
 */

int _strlen(char *s)

{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
