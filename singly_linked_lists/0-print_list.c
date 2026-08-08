#include "lists.h"

/**
 * print_list - a function that calls printf
 * to show each element in the singly list
 * @h: the head of the list which cannot
 * change for security reasons.
 *
 * Return: count - an unsigned int that
 * counts the printed element.
 */

size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);

	count = count + 1;
	if (h->next->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->next->len, h->next->str);
	count = count + 1;

	return (count);
}


