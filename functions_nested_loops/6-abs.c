#include "main.h"

/**
 * _abs - returns the absolute value of a given nunmber.
 * @n: a given number to convert into the absolute value.
 * Return: int - the absolute value.
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}

	return (n);
}
