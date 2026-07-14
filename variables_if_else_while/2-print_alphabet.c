#include <stdio.h>
/**
 * main - declare an array of chars the alphabet and will print them out
 * in one line and at the end it will move to a new line.
 *
 * Return: 0 as this is an exercise to show outputs will always
 * return a success.
 */

int main(void)
{
	char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	int i = 0;

	do {
	putchar(alphabet[i]);
	i++;
	}
	while (i < 26)
	putchar('\n');
	return (0);
}
