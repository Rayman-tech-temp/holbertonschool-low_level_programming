#include "main.h"

/**
 * print_sign - prints signs accoring to numeric
 * value.
 * @n: the number to inspect.
 * Return: int - 1 for positive, 0 for zero,
 * -1 for negative.
 */
int print_sign(int n)
{
	int output;

	output = 0;
	if (n > 0)
	{
		output = 1;
		_putchar('+');
	} else if (n < 0)
	{
		output = -1;
		_putchar('-');
	} else if (n == 0)
	{
		output = 0;
		_putchar('0');
	}

	return (output);
}
