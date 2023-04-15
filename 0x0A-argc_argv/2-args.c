#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - a program that recieves all arguments it recieves
 * @argc: count of argument
 * @argv: the arguments passed
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("these are the arguments passed %s\n", argv[a] + 2);
	}
	return (0);
}
