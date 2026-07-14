#include <stdlib.h>
#include <time.h>
/*
 * required headers for printf and true random
 */

/*
 *main - once a random number is set up, an if function will
 * determine if the number is positive, negative or zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* the beginnning of my answer */
	if (n > 0)
	{
	printf("%d is positive", n);
	}
	else if (n < 0)
	{
	printf("%d is negative", n);
	}
	else if (n == 0)
	{
	printf("%d is zero", n);
	}
	return (0);
}
