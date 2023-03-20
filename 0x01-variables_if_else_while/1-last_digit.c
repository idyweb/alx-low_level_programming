#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  main - function that prints the last digit of a number stored in the var.
 *  Return: 0 (Success)
 */
int main(void)

{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* YOUR CODE GOES THERE */
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0", n, last_digit);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last_digit);
	}
	printf("/n");
	return (0);
}
