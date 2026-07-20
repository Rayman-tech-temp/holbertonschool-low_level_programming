#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - using a pointer to change
 * the value of a variable passed in this
 * function.
 *
 * @ptr: a passed variable that holds the
 * address to alter the held value there
 *
 * Return: nothing
 */

void reset_to_98(int *ptr)
{
	*ptr = 98;
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
