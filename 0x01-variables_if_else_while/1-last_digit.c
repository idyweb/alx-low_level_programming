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
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* YOUR CODE GOES THERE */
	if (n > 5)
	{
		last_digit = (n % 10);
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (n < 6 && n != 0)
	{
		last_digit = (n % 10);
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	}
	else
	{
		printf("last digit of %d is %d and is 0\n", n, last_digit);
	}
	return (0);
}
