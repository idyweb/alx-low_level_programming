#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name using pointer to function
 * @name: string to add
 * @ptr: pointer to function
 * Return: nothing
 */
void print_name(char *name, void (*ptr)(char *))
{
	if (name == NULL || ptr == NULL)
		return;
	ptr(name);
}
