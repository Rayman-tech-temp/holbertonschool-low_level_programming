#include <stdio.h>
/**
 * main - a while loop that increments through the ASCII table
 * for the digits of base 16 number system, through a series of
 * conditions to skip to another section of the table.
 *
 * Return: 0 as this is an exercise to show outputs will always
 * return a success.
 */

int main(void)
{
	int digit = 48;

	while (digit <= 57)
	{
		putchar(digit);
		if (digit < 57)
		{
			putchar(',');
			putchar(' ');
		}
		digit++;

	}
	putchar('\n');
	return (0);
}
