#include <stdarg.h>

/**
 * sum_them_all - a Variadic Function that accepts a variable
 * amount of arguments.
 * @n: an unsigned int that tracks how many arguemnts are
 * being handled.
 *
 * Return: the sum of following aruments after count.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int val;
	int sum;
	va_list arguments;

	va_start(arguments, n);
	i = 0;
	sum = 0;
	while (i < n)
	{
		val = va_arg(arguments, int);
		sum = sum + val;
		i = i + 1;
	}

	va_end(arguments);
	return (sum);
}
