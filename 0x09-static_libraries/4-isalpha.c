#include "main.h"

/**
 * _isalpha - checks for alphabetic charater
 * @c: the character to be checked
 * Return: 1 if c is letter, 0 is not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z) || (c >= 'A' && c <= 'Z'));
}
