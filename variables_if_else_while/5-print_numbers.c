#include <stdio.h>
/**
 * main - a while loop the sequentially increments digits from
 * 0 to 9 on one line followed by a new line.
 *
 * Return: 0 as this is an exercise to show outputs will always
 * return a success.
 */

int main(void)
{
	int digit = 0;

	while (digit != 10)
	{
		printf("%d", digit);
		digit++;
	}

	putchar('\n');
	return (0);
}
