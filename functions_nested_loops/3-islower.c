#include "main.h"

/**
 * _islower - checks if it's upper or lowercase
 * @c: character to inspect.
 * Return: int - 1 for lowercase and 0 for otherwise.
 */
int _islower(int c)
{
	int output;

	output = 0;
	if (c >= 65 && c <= 90)
		output = 0;

	if (c >= 97 && c <= 122)
		output = 1;

	return (output);
}
