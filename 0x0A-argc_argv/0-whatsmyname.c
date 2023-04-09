#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - a program that prints its name
 * @argc: count of argument
 * @argv: Array of argument
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])

{
	printf("this is my name %s\n", argv[0]);

	return (0);
}
