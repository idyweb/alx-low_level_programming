#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  main - function that prints the last digit of a number stored in the var.
 *  Return: 0 (Success)
 */
int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* YOUR CODE GOES THERE */
	if (n > 5)
	{
		printf("Last digit of %d is X and is greater than 5\n", n);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is X and is less than 6 and not 0\n", n);
	}
	else
	{
		printf("last digit of %d is x and is 0\n", n);
	}
	return (0);
}
