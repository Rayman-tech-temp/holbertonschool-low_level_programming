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
	if ((n%10) < 6 && (n%10) != 0)
	{
	printf("Last digit of %d is ", n);
	printf("%d and is less than 6 and not 0\n", n%10);
	}
	else if ((n%10) > 5 && (n%10) != 0)
	{
	printf("Last digit of %d is ", n);
	printf("%d is greater than 5", n%10);
	}
	else if ((n%10) == 0)
	{
	printf("Last digit of %d is ", n);
	printf("%d and is 0\n", n%10);
	}
	return (0);
}
