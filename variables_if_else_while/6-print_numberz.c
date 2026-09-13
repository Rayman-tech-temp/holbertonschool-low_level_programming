#include <stdio.h>
/**
 * main - a while loop the sequentially increments through the ASCII
 * table for digits without using printf function or in variable.
 *
 * Return: 0 as this is an exercise to show outputs will always
 * return a success.
 */

int main(void)
{
	char digit = '0';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
