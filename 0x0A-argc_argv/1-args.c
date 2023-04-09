#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - program that prints the number of arguments
 * passed to it
 * @argc: number of arguments passed
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("this is the number of arguments sent %d\n", argc - 1);
	return (0);
}
