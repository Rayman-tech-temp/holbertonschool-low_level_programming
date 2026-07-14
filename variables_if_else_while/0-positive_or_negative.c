#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * required headers for true random and printf.
 */

/*
 * main - once a random number is set up, an if function will
 * determine if the number is positive, negative or zero.
 *
 * Return: 0 as this is an exercise to show outputs will always
 * return as success.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*
	 * the beginnning of my answer
 	 */

	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	return (0);
}
