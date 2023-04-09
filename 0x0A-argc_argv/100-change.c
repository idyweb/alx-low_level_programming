#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - a program that prints the minimum number of coins
 * @cent: change that remains
 * @num_coin: amount of money given
 * @argc: the number of command line arguments provided
 * @argv: an array of strings containing the command line arguments
 * Return: 0 on success, 1 on error:
 */


int main(int argc, char *argv[])

{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cent = atoi(argv[1]);

	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}

	int num_coin = 0;

	num_coin += cent / 25;
	cent %= 25;
	num_coin += cent / 10;
	cent %= 10;
	num_coin += cent / 5;
	cent %= 5;
	num_coin += cent / 2;
	cent %= 2;
	num_coin += cent;

	printf("%d\n", num_coin);
	return (0);
}
