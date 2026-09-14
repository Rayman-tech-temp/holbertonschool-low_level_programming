#include "main.h"

/**
 * main - prints _putchar into temrinal and newline.
 * Return: int - 0 as this program always succeeds.
 */
int main(void)
{
	char *str;
	int i;

	i = 0;
	str = "_putchar";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 1;
	}
	_putchar('\n');
	return (0);
}
