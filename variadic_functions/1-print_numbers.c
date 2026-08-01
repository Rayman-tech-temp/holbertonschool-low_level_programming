#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_numbers - variadic function printing arguments.
 * @Separator: the character used to seperate the entries.
 * @n: number of items to print.
 *
 * Return: nothing as this only executes print line outputs.
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	int item;

	i = 0;
	va_start(arguments, n);
	while (i < n)
	{
		item = va_arg(arguments, int);
		printf("%d", item);
		if (i < n -1)
			printf("%s", separator);
		i = i + 1;
	}
	printf("\n");
	va_end(arguments);
}
