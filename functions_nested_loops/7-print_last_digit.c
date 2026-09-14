#include "main.h"

/**
 * print_last_digit - returns the last decimal digit
 * from a given number
 * @n: a given number to find the last digit
 * Return: int - last digit from given number.
 */
int print_last_digit(int n)
{
	char array[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	int temp;

	temp = n % 10;

	if (n < 0)
		temp = (n * -1) % 10;

	_putchar(array[temp]);

	return (temp);
}
