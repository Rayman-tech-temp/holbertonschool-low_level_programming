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
	list_t *temp;

	count = 0;
	temp = malloc(sizeof(list_t));
	if (h == NULL)
		return (count);
	else if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);
	count = count + 1;
	if (h->next == NULL)
		return (count);
	temp->len = h->next->len;
	temp->str = h->next->str;
	temp->next = h->next;

	while (temp->next != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);

		count = count + 1;
		temp = temp->next;
	}
	return (count);
}


