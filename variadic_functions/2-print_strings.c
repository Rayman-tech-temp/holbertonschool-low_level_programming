#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_numbers - variadic function printing arguments.
 * @separator: the character used to seperate the entries.
 * @n: number of items to print.
 *
 * Return: nothing as this only executes print line outputs.
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	char *item;

	i = 0;
	va_start(arguments, n);
	while (i < n)
	{
		item = va_arg(arguments, char *);
		printf("%s", item);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		i = i + 1;
	}
	printf("\n");
	va_end(arguments);
}
