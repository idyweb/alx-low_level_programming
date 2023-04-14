#include "main.h"
/**
 * _strpbrk - entry point
 * @k: input
 * @correct:input
 * Return: Always 0
 */
char *_strpbrk(char *k, char *correct)
{
	int i;

	while (*k)
	{
		for (i = 0; correct[i]; i++)
		{
			if (*k == correct[i])
				return (k);
		}
		k++;
	}
	return ('\0');
}
