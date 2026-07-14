#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main - once a random number is set up, an if function will
 * determine if the last digit greater than 5, less than six or is zero.
 *
 * time.h and stdlib.h are used to establish random seeded from time.
 *
 * Return: 0 as this is an exercise to show outputs will always
 * return as success.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastDigit = n % 10;
	if (lastDigit < 6 && lastDigit != 0)
	{
	printf("Last digit of %d is ", n);
	printf("%d and is less than 6 and not 0\n", lastDigit)
	}
	else if (lastDigit > 5 && lastDigit != 0)
	{
	printf("Last digit of %d is ", n);
	printf("%d is greater than 5", lastDigit)
	}
	else if (lastDigit == 0)
	{
	printf("Last digit of %d is ", n);
	printf("%d and is 0\n")
	}
	return (0);
}
